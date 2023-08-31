#include "Composite.h"

void Composite::info()
{
	cout << "Total cost: " << GetCost() << " RUB\n";
}

double Composite::GetCost()
{
    double cost = 0.0;
    for (auto component : costs_all) {
        cost += component->GetCost();
    }
    return cost;
}
