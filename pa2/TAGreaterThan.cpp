#include "TAGreaterThan.h"
std::string TAGreaterThan::name = "TAGreaterThan";
TAGreaterThan::TAGreaterThan(TAInt x, TAInt y)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getValue());
}

void TAGreaterThan::evaluate()
{
	result.setValue(value1.getValue() > value2.getValue());
}
TAGreaterThan::TAGreaterThan(Type *x, Type *y)
{
	value1.setValue(x->getValue());
	value2.setValue(y->getValue());
}
TAGreaterThan::TAGreaterThan(TADouble x, TADouble y)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getValue());
}

TAGreaterThan::TAGreaterThan(TAInt x, TACeiling y)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getValue().getValue());
}

TAGreaterThan::TAGreaterThan(TAInt x, TADouble y)
{
	std::cout << "Type mismatch! Cannot compare the values of different types." << std::endl;
}

TAGreaterThan::TAGreaterThan(TADouble x, TAInt y)
{
	std::cout << "Type mismatch! Cannot compare the values of different types." << std::endl;
}
TABool TAGreaterThan::getResult()
{
	return result;
}
void TAGreaterThan::List()
{
	if (name == "TAGreaterThan")
	{
		std::cout << TAGreaterThan::name.c_str() << std::endl;
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

std::string TAGreaterThan::getOperationName()
{
	return name;
}

/*TAPair TAGreaterThan::getOperands()
{
	return TAPair(value1,value2);
}
*/