#include "TAXOR.h"
std::string TAXOR::name = "TAXOR";
TAXOR::TAXOR(TABool x, TABool y)
{
	value1 = x;
	value2 = y;
}

TAXOR::TAXOR(TABoolOperations &y, TABool x)
{
	value1 = x;
	//value2 = y;
}

TAXOR::TAXOR(TABoolOperations &, TABoolOperations &)
{

}

TAXOR::TAXOR(TABool x, TABoolOperations &y)
{
	value1.setValue(x.getValue());
	value2 = y.getResult();
}

void TAXOR::evaluate()
{
	result.setValue(value1.getValue() != value2.getValue());
}
TABool TAXOR::getResult()
{
	return result;
}
void TAXOR::List()
{
	if (name == "TAXOR")
	{
		std::cout << TAXOR::name.c_str() << std::endl;
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
