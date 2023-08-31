#include "Adapter.h"

Adapter::~Adapter()
{
	delete p_fConvertor;
}

double Adapter::GetCost()
{
	return (p_fConvertor->GetCost() - 20 / 2 - 0.5);
}
