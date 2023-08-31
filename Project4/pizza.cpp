
#include <iostream>
#include <vector>
#include <Windows.h>
#include "Factory_all.h"
#include "Adapter.h"
#include "Composite.h"
#include "Decorator.h"
using namespace std;

int main()
{
    cout << "\nHello\n";
    short choose = -1;
    vector<Pizza*> v;
    MargheritaFactory* margherita_factory = NULL;;
    PepperoniFactory* pepperoni_factory = NULL;;
    HawaiianFactory* hawaiian_factory = NULL;;
    Convertor* p = NULL;
    Composite com;
    Pizza* toppings = nullptr;
    while (choose != 4)
    {
        com.ClearVector();
        system("cls");
        cout << "Menu\n";
        cout << "1- Margherita cost 50 RUB\n"
            << "2- Pepperoni cost 75 RUB\n"
            << "3- Hawaiian cost 45 RUB\n"
            << "4- exit\n\n";

        cout << "================YOUR ORDER==================\n";
        for (int i = 0; i < v.size(); i++)
        {
            
            v[i]->info();
            cout << '\n';

            cout << v[i]->GetCost() << " RUB";
            com.AddComponent(v[i]);
            p = new Adapter(v[i]);
            cout << " / " << p->GetCost() << " USA " << "\n\n";
            p = NULL;
        }
        com.info();
        cout << "============================================\n"
           << "Enter: ";
        cin >> choose;
        switch (choose)
        {
        case 1:
            margherita_factory = new MargheritaFactory;
            v.push_back(margherita_factory->createPizza());
            v.back()=MenuToppings(v.back(), toppings);
            Sleep(999);
            break;
        case 2:
            pepperoni_factory = new PepperoniFactory;
            v.push_back(pepperoni_factory->createPizza());
            v.back() = MenuToppings(v.back(), toppings);
            Sleep(999);
            break;
        case 3:
            hawaiian_factory = new HawaiianFactory;
            v.push_back(hawaiian_factory->createPizza());
            v.back() = MenuToppings(v.back(), toppings);
            Sleep(999);
            break;
        case 4:
            system("cls");
            cout << "\nGoodbye\n";

            Sleep(970);
            break;
        }

    }
    for (int i = 0; i < v.size(); i++)
    {
        delete v[i];
    }
    delete margherita_factory;
    delete pepperoni_factory;
    delete hawaiian_factory;
    delete toppings;
    delete p;
    
    
    

    
}
