#include "TALessThan.h"

std::string TALessThan::name = "TALessThan";
TALessThan::TALessThan(TAInt x, TAInt y)
{
	result = x.getValue() < y.getValue() ? true : false;
}

TALessThan::TALessThan(TADouble x, TADouble y)
{
	result = x.getValue() < y.getValue() ? true : false;
}

TALessThan::TALessThan(TAInt x, TACeiling y)
{
	result = x.getValue() < y.getValue().getValue() ? true : false;
}

TALessThan::TALessThan(TAInt x, TADouble y)
{
	std::cout << "Type mismatch! Cannot compare the values of different types." << std::endl;
}

TALessThan::TALessThan(TADouble x, TAInt y)

{
	std::cout << "Type mismatch! Cannot compare the values of different types." << std::endl;
}

void TALessThan::isGreaterThan(TADouble x,TADouble y)
{
	result = x.getValue() < y.getValue() ? true : false;
}

void TALessThan::isGreaterThan(TAInt x, TAInt y)
{
	result = x.getValue() < y.getValue() ? true : false;
}

void TALessThan::isGreaterThan(TAInt x, TADouble y)
{
	std::cout << "Type mismatch! Cannot compare the values of different types." << std::endl;
}

void TALessThan::isGreaterThan(TADouble x, TAInt y)
{
	std::cout << "Type mismatch! Cannot compare the values of different types." << std::endl;
}

bool TALessThan::getResult()
{
	return result;
}
