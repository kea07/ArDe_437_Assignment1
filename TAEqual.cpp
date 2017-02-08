#include "TAEqual.h"

std::string TAEquals::name = "TAEquals";
TAEquals::TAEquals(TAInt x, TAInt y)
{
	result = x.getValue() == y.getValue() ? true : false;
}

TAEquals::TAEquals(TADouble x, TADouble y)
{
	result = x.getValue() == y.getValue() ? true : false;
}

TAEquals::TAEquals(TAInt x, TACeiling y)
{
	result = x.getValue() == y.getValue().getValue() ? true : false;
}

TAEquals::TAEquals(TAInt x, TADouble y)
{
	std::cout << "Type mismatch! Cannot compare the values of different types." << std::endl;
}

TAEquals::TAEquals(TADouble x, TAInt y)

{
	std::cout << "Type mismatch! Cannot compare the values of different types." << std::endl;
}

void TAEquals::isEqual(TADouble x,TADouble y)
{
	result = x.getValue() == y.getValue() ? true : false;
}

void TAEquals::isEqual(TAInt x, TAInt y)
{
	result = x.getValue() == y.getValue() ? true : false;
}

void TAEquals::isEqual(TAInt x, TADouble y)
{
	std::cout << "Type mismatch! Cannot compare the values of different types." << std::endl;
}

void TAEquals::isEqual(TADouble x, TAInt y)
{
	std::cout << "Type mismatch! Cannot compare the values of different types." << std::endl;
}

bool TAEquals::getResult()
{
	return result;
}
