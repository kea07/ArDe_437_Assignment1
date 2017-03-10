#include "TAOr.h"

std::string TAOr::name = "TAOr";
TAOr::TAOr(TABool x, TABool y)
{
	value1 = x;
	value2 = y;
}

TAOr::TAOr(TABoolOperations &y, TABool x)
{
	value1 = x;
	//value2 = y;
}

TAOr::TAOr(TABoolOperations &, TABoolOperations &)
{

}

TAOr::TAOr(TABool x, TABoolOperations &y)
{
	value1.setValue(x.getValue());
	value2 = y.getResult();
}

void TAOr::evaluate()
{
	result.setValue(value1.getValue() || value2.getValue());
}
TABool TAOr::getResult()
{
	return result;
}
void TAOr::List()
{
	if (name == "TAOr")
	{
		std::cout << TAOr::name.c_str() << std::endl;
	}
	else
	{
		std::cout << "(";
		value1.List();
		std::cout << ", ";
		value2.List();
		std::cout << ")";
	}
}
