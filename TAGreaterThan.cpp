#include "TAGreaterThan.h"
std::string TAGreaterThan::name = "TAGreaterThan";
TAGreaterThan::TAGreaterThan(TAInt x, TAInt y)
{
	result = x.getValue() > y.getValue() ? true : false;
}

TAGreaterThan::TAGreaterThan(TADouble x, TADouble y)
{
	result = x.getValue() > y.getValue() ? true : false;
}

TAGreaterThan::TAGreaterThan(TAInt x, TACeiling y)
{
	result = x.getValue() > y.getValue().getValue() ? true : false;
}

TAGreaterThan::TAGreaterThan(TAInt x, TADouble y)
{
	std::cout << "Type mismatch! Cannot compare the values of different types." << std::endl;
}

TAGreaterThan::TAGreaterThan(TADouble x, TAInt y)

{
	std::cout << "Type mismatch! Cannot compare the values of different types." << std::endl;
}

void TAGreaterThan::isGreaterThan(TADouble x,TADouble y)
{
	result = x.getValue() > y.getValue() ? true : false;
}

void TAGreaterThan::isGreaterThan(TAInt x, TAInt y)
{
	result = x.getValue() > y.getValue() ? true : false;
}

void TAGreaterThan::isGreaterThan(TAInt x, TADouble y)
{
	std::cout << "Type mismatch! Cannot compare the values of different types." << std::endl;
}

void TAGreaterThan::isGreaterThan(TADouble x, TAInt y)
{
	std::cout << "Type mismatch! Cannot compare the values of different types." << std::endl;
}

bool TAGreaterThan::getResult()
{
	return result;
}
