#include "Decorator.h"

Pizza* MenuToppings(Pizza* w, Pizza* topping)
{
    {
        int choose = -1;
        while (choose != 0)
        {
            system("cls");
            w->info();
            cout << '\n' <<  w->GetCost() << " RUB";
            cout << "\n\nToppings: \n"
                << "1- Cheese 9 RUB\n"
                << "2- Mushroom 9 RUB\n"
                << "3- Tomato 6 RUB\n"
                << "4- Sausage 10 RUB\n"
                << "5- Pineapple 8 RUB\n"
                << "0- Next\n"
                << "\nEnter: ";
            cin >> choose;
            switch (choose) {
            case 1:
                topping = new Cheese(w);
                w = topping;
                break;
            case 2:
                topping = new Mushroom(w);
                w = topping;
                break;
            case 3:
                topping = new Tomato(w);
                w = topping;
                break;
            case 4:
                topping = new Sausage(w);
                w = topping;
                break;
            case 5:
                topping = new Pineapple(w);
                w = topping;
                break;

            }
        }
    }
    return w;
}

double Pineapple::GetCost()
{
    return piz->GetCost() + 8;
}

void Pineapple::info()
{
    Decorator::info();
    cout << "  +Pineapple";
}

double Sausage::GetCost()
{
    return piz->GetCost() + 10;
}

void Sausage::info()
{
    Decorator::info();
    cout << "  +Sausage";
}

double Tomato::GetCost()
{
    return piz->GetCost() + 6;
}

void Tomato::info()
{
    Decorator::info();
    cout << "  +Tomato";
}

double Mushroom::GetCost()
{
    return piz->GetCost() + 9;
}

void Mushroom::info()
{
    Decorator::info();
    cout << "  +Mushroom";
}

double Cheese::GetCost()
{
    return piz->GetCost() + 9;
}

void Cheese::info()
{
    Decorator::info();

    cout << "  +Cheese";
}

Decorator::Decorator(Pizza* w)
{
    piz = w;
}

void Decorator::info()
{
    piz->info();
}
