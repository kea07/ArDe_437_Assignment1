#include "TALessThanOrEquals.h"
std::string TALessThanOrEquals::name = "TALessThanOrEquals";
TALessThanOrEquals::TALessThanOrEquals(TAInt x, TAInt y)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getValue());
}

void TALessThanOrEquals::evaluate()
{
	result.setValue( value1.getValue() <= value2.getValue());
}
TALessThanOrEquals::TALessThanOrEquals(TADouble x, TADouble y)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getValue());
}

TALessThanOrEquals::TALessThanOrEquals(TAInt x, TACeiling y)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getValue().getValue());
}

TALessThanOrEquals::TALessThanOrEquals(TAInt x, TADouble y)
{
	std::cout << "Type mismatch! Cannot compare the values of different types." << std::endl;
}

TALessThanOrEquals::TALessThanOrEquals(TADouble x, TAInt y)
{
	std::cout << "Type mismatch! Cannot compare the values of different types." << std::endl;
}
TABool TALessThanOrEquals::getResult()
{
	return result;
}
void TALessThanOrEquals::List()
{
	if (name == "TALessThanOrEquals")
	{
		std::cout << TALessThanOrEquals::name.c_str() << std::endl;
	}
	else
	{
		std::cout << "(";
		value1.List();
		std::cout << ", ";
		value2.List();
		std::cout << ")";
	}
}