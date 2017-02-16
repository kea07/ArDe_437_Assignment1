#include "TAOr.h"
std::string TAOr::name = "TAOr";
TAOr::TAOr(TABool x, TABool y)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getValue());
}

TAOr::TAOr(TABool x, TALessThan y)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getResult());

}

TAOr::TAOr(TABool x, TALessThanOrEquals y)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getResult());

}

TAOr::TAOr(TABool x, TAGreaterThan y)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getResult());

}

TAOr::TAOr(TABool x, TAGreaterThanOrEquals y)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getResult());

}

TAOr::TAOr(TABool x, TAEqual y)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getResult());

}

TAOr::TAOr(TALessThan y, TABool x)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getResult());

}

TAOr::TAOr(TAGreaterThan y, TABool x)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getResult());

}

TAOr::TAOr(TALessThanOrEquals y, TABool x)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getResult());

}

TAOr::TAOr(TAGreaterThanOrEquals y, TABool x)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getResult());

}

TAOr::TAOr(TAEqual y, TABool x)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getResult());
}
TABool TAOr::getResult()
{
	return result;
}
void TAOr::evaluate()
{
	result.setValue(value1.getValue() || value2.getValue());
}
void TAOr::List()
{
	if (true)
		std::cout << TAOr::name.c_str() << std::endl;
	else
	{
		std::cout << "( " << " )" << std::endl;
	}
}
