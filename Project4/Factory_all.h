#pragma once
#include <iostream>
#include <vector>
#include "Pizza_all.h"
using namespace std;

class Factory
{
public:
    virtual Pizza* createPizza() = 0;
    virtual ~Factory() {}
};

class MargheritaFactory : public Factory
{
public:
    Pizza* createPizza();
};

class PepperoniFactory : public Factory
{
public:
    Pizza* createPizza();
};

class HawaiianFactory : public Factory
{
public:
    Pizza* createPizza();
};
