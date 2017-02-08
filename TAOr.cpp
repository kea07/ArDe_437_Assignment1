#include "TAOr.h"
std::string TAOr::name = "TAOr";
TAOr::TAOr(TABool x, TABool y)
{
	result = x.getValue() || y.getValue();
}

TAOr::TAOr(TABool x, TALessThan y)
{
	result = x.getValue() || y.getResult();
}

TAOr::TAOr(TABool x, TALessThanOrEquals y)

{
	result = x.getValue() || y.getResult();
}

TAOr::TAOr(TABool x, TAGreaterThan y)
{
	result = x.getValue() || y.getResult();
}

TAOr::TAOr(TABool x, TAGreaterThanOrEquals y)

{
	result = x.getValue() || y.getResult();
}

TAOr::TAOr(TABool x, TAEquals y)
{
	result = x.getValue() || y.getResult();
}

TAOr::TAOr(TALessThan y, TABool x)
{
	result = x.getValue() || y.getResult();
}

TAOr::TAOr(TAGreaterThan y, TABool x)
{
	result = x.getValue() || y.getResult();
}

TAOr::TAOr(TALessThanOrEquals y, TABool x)
{
	result = x.getValue() || y.getResult();
}

TAOr::TAOr(TAGreaterThanOrEquals y, TABool x)
{
	result = x.getValue() || y.getResult();
}

TAOr::TAOr(TAEquals y, TABool x)
{
	result = x.getValue() || y.getResult();
}

bool TAOr::getResult()
{
	return result;
}

