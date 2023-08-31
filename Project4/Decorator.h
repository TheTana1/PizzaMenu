#pragma once
#include "Pizza_all.h"


class Decorator : public Pizza
{
protected:
    Pizza* piz;
public:
    Decorator(Pizza* w);
    void info();
};


class Cheese : public Decorator
{
public:
    Cheese(Pizza* w) : Decorator(w) {}

    double GetCost();
    void info();
};


class Mushroom : public Decorator
{
public:
    Mushroom(Pizza* w) : Decorator(w) {}


    double GetCost();
    void info();
};

class Tomato : public Decorator
{
public:
    Tomato(Pizza* w) : Decorator(w) {}

    double GetCost();

    void info();

};

class Sausage : public Decorator
{
public:
    Sausage(Pizza* w) : Decorator(w) {}

    double GetCost();

    void info();
};

class Pineapple : public Decorator
{
public:
    Pineapple(Pizza* w) : Decorator(w) {}

    double GetCost();
    void info();
};

Pizza* MenuToppings(Pizza* w, Pizza* toppings);



