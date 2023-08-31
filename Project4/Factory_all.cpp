#include "Factory_all.h"

Pizza* MargheritaFactory::createPizza()
{
    return new Margherita;
}

Pizza* PepperoniFactory::createPizza()
{
    return new Pepperoni;
}

Pizza* HawaiianFactory::createPizza()
{
    return new Hawaiian;
}
