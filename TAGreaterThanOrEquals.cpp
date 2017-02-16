#include "TAGreaterThanOrEquals.h"
std::string TAGreaterThanOrEquals::name = "TAGreaterThanOrEquals";
TAGreaterThanOrEquals::TAGreaterThanOrEquals(TAInt x, TAInt y)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getValue());
}

void TAGreaterThanOrEquals::evaluate()
{
	result = value1.getValue() >= value2.getValue();
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
bool TAGreaterThanOrEquals::getResult()
{
	return result;
}
void TAGreaterThanOrEquals::List()
{
	if (true)
		std::cout << TAGreaterThanOrEquals::name.c_str() << std::endl;
	else
	{
		std::cout << "( " << " )" << std::endl;
	}
}