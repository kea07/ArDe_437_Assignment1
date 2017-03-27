#include "TAGreaterThanOrEquals.h"
std::string TAGreaterThanOrEquals::name = "TAGreaterThanOrEquals";
TAGreaterThanOrEquals::TAGreaterThanOrEquals(TAInt x, TAInt y)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getValue());
}

void TAGreaterThanOrEquals::evaluate()
{
	result.setValue(value1.getValue() >= value2.getValue());
}
TAGreaterThanOrEquals::TAGreaterThanOrEquals(TADouble x, TADouble y)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getValue());
}

TAGreaterThanOrEquals::TAGreaterThanOrEquals(TAInt x, TACeiling y)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getValue().getValue());
}

TAGreaterThanOrEquals::TAGreaterThanOrEquals(TAInt x, TADouble y)
{
	std::cout << "Type mismatch! Cannot compare the values of different types." << std::endl;
}

TAGreaterThanOrEquals::TAGreaterThanOrEquals(TADouble x, TAInt y)
{
	std::cout << "Type mismatch! Cannot compare the values of different types." << std::endl;
}
TABool TAGreaterThanOrEquals::getResult()
{
	return result;
}
TAGreaterThanOrEquals::TAGreaterThanOrEquals(Type *x, Type *y)
{
	value1.setValue(x->getValue());
	value2.setValue(y->getValue());
}
void TAGreaterThanOrEquals::List()
{
	if (name == "TAGreaterThanOrEquals")
	{
		std::cout << TAGreaterThanOrEquals::name.c_str() << std::endl;
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

std::string TAGreaterThanOrEquals::getOperationName()
{
	return name;
}

TAPair TAGreaterThanOrEquals::getOperands()
{
	return TAPair(value1,value2);
}
