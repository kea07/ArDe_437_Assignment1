#include "TAGreaterThanOrEquals.h"

std::string TAGreaterThanOrEquals::name = "TAGreaterThanOrEquals";
TAGreaterThanOrEquals::TAGreaterThanOrEquals(TAInt x, TAInt y)
{
	result = x.getValue() >= y.getValue() ? true : false;
}

TAGreaterThanOrEquals::TAGreaterThanOrEquals(TADouble x, TADouble y)
{
	result = x.getValue() >= y.getValue() ? true : false;
}

TAGreaterThanOrEquals::TAGreaterThanOrEquals(TAInt x, TACeiling y)
{
	result = x.getValue() >= y.getValue().getValue() ? true : false;
}

TAGreaterThanOrEquals::TAGreaterThanOrEquals(TAInt x, TADouble y)
{
	std::cout << "Type mismatch! Cannot compare the values of different types." << std::endl;
}

TAGreaterThanOrEquals::TAGreaterThanOrEquals(TADouble x, TAInt y)

{
	std::cout << "Type mismatch! Cannot compare the values of different types." << std::endl;
}

void TAGreaterThanOrEquals::isGreaterThan(TADouble x,TADouble y)
{
	result = x.getValue() >= y.getValue() ? true : false;
}

void TAGreaterThanOrEquals::isGreaterThan(TAInt x, TAInt y)
{
	result = x.getValue() >= y.getValue() ? true : false;
}

void TAGreaterThanOrEquals::isGreaterThan(TAInt x, TADouble y)
{
	std::cout << "Type mismatch! Cannot compare the values of different types." << std::endl;
}

void TAGreaterThanOrEquals::isGreaterThan(TADouble x, TAInt y)
{
	std::cout << "Type mismatch! Cannot compare the values of different types." << std::endl;
}

bool TAGreaterThanOrEquals::getResult()
{
	return result;
}
