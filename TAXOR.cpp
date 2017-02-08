#include "TAXOR.h"
std::string TAXOR::name = "TAXOR";
TAXOR::TAXOR(TABool x, TABool y)
{
	result = x.getValue() != y.getValue() ? true: false;
}

TAXOR::TAXOR(TABool x, TALessThan y)
{
	result = x.getValue() != y.getResult() ? true: false;
}

TAXOR::TAXOR(TABool x, TALessThanOrEquals y)

{
	result = x.getValue() != y.getResult() ? true: false;
}

TAXOR::TAXOR(TABool x, TAGreaterThan y)
{
	result = x.getValue() != y.getResult() ? true: false;
}

TAXOR::TAXOR(TABool x, TAGreaterThanOrEquals y)

{
	result = x.getValue() != y.getResult() ? true: false;
}

TAXOR::TAXOR(TABool x, TAEquals y)
{
	result = x.getValue() != y.getResult() ? true: false;
}

TAXOR::TAXOR(TALessThan y, TABool x)
{
	result = x.getValue() != y.getResult() ? true: false;
}

TAXOR::TAXOR(TAGreaterThan y, TABool x)
{
	result = x.getValue() != y.getResult() ? true: false;
}

TAXOR::TAXOR(TALessThanOrEquals y, TABool x)
{
	result = x.getValue() != y.getResult() ? true: false;
}

TAXOR::TAXOR(TAGreaterThanOrEquals y, TABool x)
{
	result = x.getValue() != y.getResult() ? true: false;
}

TAXOR::TAXOR(TAEquals y, TABool x)
{
	result = x.getValue() != y.getResult() ? true : false;
}
bool TAXOR::getResult()
{
	return result;
}

