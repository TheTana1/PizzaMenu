#pragma once
#include <iostream>
#include <vector>


using namespace std;

class Pizza
{
    int cost = 0;
public:
    virtual double  GetCost() = 0;
    virtual void info() = 0;
    virtual ~Pizza() {}
};

class Margherita : public Pizza
{
    int cost = 50;
public:
    double GetCost();
    void info();
};

class Pepperoni : public Pizza
{
    int cost = 75;

public:
    double GetCost();
    void info();
};

class Hawaiian : public Pizza
{
    int cost = 45;

public:
    double GetCost();
    void info();
};
