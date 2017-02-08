#include "TALessThanOrEquals.h"

std::string TALessThanOrEquals::name = "TALessThanOrEquals";
TALessThanOrEquals::TALessThanOrEquals(TAInt x, TAInt y)
{
	result = x.getValue() <= y.getValue() ? true : false;
}

TALessThanOrEquals::TALessThanOrEquals(TADouble x, TADouble y)
{
	result = x.getValue() <= y.getValue() ? true : false;
}

TALessThanOrEquals::TALessThanOrEquals(TAInt x, TACeiling y)
{
	result = x.getValue() <= y.getValue().getValue() ? true : false;
}

TALessThanOrEquals::TALessThanOrEquals(TAInt x, TADouble y)
{
	std::cout << "Type mismatch! Cannot compare the values of different types." << std::endl;
}

TALessThanOrEquals::TALessThanOrEquals(TADouble x, TAInt y)

{
	std::cout << "Type mismatch! Cannot compare the values of different types." << std::endl;
}

void TALessThanOrEquals::isLessThanOrEquals(TADouble x,TADouble y)
{
	result = x.getValue() <= y.getValue() ? true : false;
}

void TALessThanOrEquals::isLessThanOrEquals(TAInt x, TAInt y)
{
	result = x.getValue() <= y.getValue() ? true : false;
}

void TALessThanOrEquals::isLessThanOrEquals(TAInt x, TADouble y)
{
	std::cout << "Type mismatch! Cannot compare the values of different types." << std::endl;
}

void TALessThanOrEquals::isLessThanOrEquals(TADouble x, TAInt y)
{
	std::cout << "Type mismatch! Cannot compare the values of different types." << std::endl;
}

bool TALessThanOrEquals::getResult()
{
	return result;
}
