#include "TAGreaterThan.h"
std::string TAGreaterThan::name = "TAGreaterThan";
TAGreaterThan::TAGreaterThan(TAInt x, TAInt y)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getValue());
}

void TAGreaterThan::evaluate()
{
	result = value1.getValue() > value2.getValue();
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
bool TAGreaterThan::getResult()
{
	return result;
}
void TAGreaterThan::List()
{
	if (true)
		std::cout << TAGreaterThan::name.c_str() << std::endl;
	else
	{
		std::cout << "( " << " )" << std::endl;
	}
}