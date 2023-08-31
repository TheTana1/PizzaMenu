#pragma once
#include "Pizza_all.h"
#include <vector>
class Composite : public Pizza
{
public:
    void AddComponent(Pizza* component) {
        costs_all.push_back(component);
    }
    void info();
    void ClearVector() { costs_all.clear(); }
    double GetCost();

private:
    vector<Pizza*> costs_all;
};

