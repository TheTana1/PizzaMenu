#pragma once
#include "Pizza_all.h"
class Convertor
{
public:
    virtual ~Convertor() {}
    virtual double GetCost() = 0;
};
class Adapter : public Convertor
{
public:
    Adapter(Pizza* p) : p_fConvertor(p) {}
    ~Adapter(); 
    double GetCost();
private:
    Pizza* p_fConvertor;
};
