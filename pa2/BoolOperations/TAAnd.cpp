#include "TAAnd.h"

std::string TAAnd::name = "TAAnd";
TAAnd::TAAnd(TABool x, TABool y)
{
	value1 = x;
	value2 = y;
}

TAAnd::TAAnd(TABoolOperations &y, TABool x)
{
	value1 = x;
	value2 = y.getResult();
}

TAAnd::TAAnd(TABoolOperations &x, TABoolOperations &y)
{
	value1 = x.getResult();
	value2 = y.getResult();
}

TAAnd::TAAnd(TABool x, TABoolOperations &y)
{
	value1.setValue(x.getValue());
	value2 = y.getResult();
}


void TAAnd::evaluate()
{
	result.setValue( value1.getValue() && value2.getValue());
}
TABool TAAnd::getResult()
{
	return result;
}
void TAAnd::List()
{
	std::cout << "(";
	value1.List();
	std::cout << ", ";
	value2.List();
	std::cout << ")";
}
