#include "TAAnd.h"
std::string TAAnd::name = "TAAnd";
TAAnd::TAAnd(TABool x, TABool y)
{
	result = x.getValue() && y.getValue();
}

TAAnd::TAAnd(TABool x, TALessThan y)
{
	result = x.getValue() && y.getResult();
}

TAAnd::TAAnd(TABool x, TALessThanOrEquals y)

{
	result = x.getValue() && y.getResult();
}

TAAnd::TAAnd(TABool x, TAGreaterThan y)
{
	result = x.getValue() && y.getResult();
}

TAAnd::TAAnd(TABool x, TAGreaterThanOrEquals y)

{
	result = x.getValue() && y.getResult();
}

TAAnd::TAAnd(TABool x, TAEquals y)
{
	result = x.getValue() && y.getResult();
}

TAAnd::TAAnd(TALessThan y, TABool x)
{
	result = x.getValue() && y.getResult();
}

TAAnd::TAAnd(TAGreaterThan y, TABool x)
{
	result = x.getValue() && y.getResult();
}

TAAnd::TAAnd(TALessThanOrEquals y, TABool x)
{
	result = x.getValue() && y.getResult();
}

TAAnd::TAAnd(TAGreaterThanOrEquals y, TABool x)
{
	result = x.getValue() && y.getResult();
}

TAAnd::TAAnd(TAEquals y, TABool x)
{
	result = x.getValue() && y.getResult();
}

bool TAAnd::getResult()
{
	return result;
}

