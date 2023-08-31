#include "Pizza_all.h"

double Margherita::GetCost()
{
    return cost;
}

void Margherita::info()
{
    cout << "Margherita " << cost << " RUB ";
}

double Pepperoni::GetCost()
{
    return cost;
}

void Pepperoni::info()
{
    cout << "Pepperoni " << cost << " RUB ";
}

double Hawaiian::GetCost()
{
    return cost;
}

void Hawaiian::info()
{
    cout << "Hawaiian " << cost << " RUB ";
}
