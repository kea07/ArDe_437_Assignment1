#include "TALessThan.h"
std::string TALessThan::name = "TALessThan";
TALessThan::TALessThan(TAInt x, TAInt y)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getValue());
}

void TALessThan::evaluate()
{
	result.setValue( value1.getValue() < value2.getValue());
}
TALessThan::TALessThan(TADouble x, TADouble y)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getValue());
}

TALessThan::TALessThan(TAInt x, TACeiling y)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getValue().getValue());
}

TALessThan::TALessThan(TAInt x, TADouble y)
{
	std::cout << "Type mismatch! Cannot compare the values of different types." << std::endl;
}

TALessThan::TALessThan(TADouble x, TAInt y)
{
	std::cout << "Type mismatch! Cannot compare the values of different types." << std::endl;
}
TABool TALessThan::getResult()
{
	return result;
}
void TALessThan::List()
{
	if (name == "TALessThan")
	{
		std::cout << TALessThan::name.c_str() << std::endl;
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

std::string TALessThan::getOperationName()
{
	return name;
}

TAPair TALessThan::getOperands()
{
	return TAPair(value1,value2);
}
