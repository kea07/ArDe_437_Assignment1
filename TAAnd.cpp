#include "TAAnd.h"
std::string TAAnd::name = "TAAnd";
TAAnd::TAAnd(TABool x, TABool y)
{
	value1 = x.getValue();
	value2 = y.getValue();
}

TAAnd::TAAnd(TABool x, TALessThan y)
{
	value1 = x.getValue();
	value2 = y.getResult();
}

TAAnd::TAAnd(TABool x, TALessThanOrEquals y)
{
	value1 = x.getValue();
	value2 = y.getResult();
}

TAAnd::TAAnd(TABool x, TAGreaterThan y)
{
	value1 = x.getValue();
	value2 = y.getResult();
}

TAAnd::TAAnd(TABool x, TAGreaterThanOrEquals y)

{
	value1 = x.getValue();
	value2 = y.getResult();
}

TAAnd::TAAnd(TABool x, TAEqual y)
{
	value1 = x.getValue();
	value2 = y.getResult();
}

TAAnd::TAAnd(TALessThan y, TABool x)
{
	value1 = x.getValue();
	value2 = y.getResult();
}

TAAnd::TAAnd(TAGreaterThan y, TABool x)
{
	value1 = x.getValue();
	value2 = y.getResult();
}

TAAnd::TAAnd(TALessThanOrEquals y, TABool x)
{
	value1 = x.getValue();
	value2 = y.getResult();
}

TAAnd::TAAnd(TAGreaterThanOrEquals y, TABool x)
{
	value1 = x.getValue();
	value2 = y.getResult();
}

TAAnd::TAAnd(TAEqual y, TABool x)
{
	value1 = x.getValue();
	value2 = y.getResult();
}

void TAAnd::evaluate()
{
	result = value1 && value2;
}
bool TAAnd::getResult()
{
	return result;
}
void TAAnd::List()
{
	if (true)
		std::cout << TAAnd::name.c_str() << std::endl;
	else
	{
		std::cout << "( "  << " )" << std::endl;
	}
}
