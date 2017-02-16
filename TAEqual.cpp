#include "TAEqual.h"
std::string TAEqual::name = "TAEqual";
TAEqual::TAEqual(TAInt x, TAInt y)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getValue());
}

void TAEqual::evaluate()
{
	result = value1.getValue() == value2.getValue();
}
TAEqual::TAEqual(TADouble x, TADouble y)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getValue());
}

TAEqual::TAEqual(TAInt x, TACeiling y)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getValue().getValue());
}

TAEqual::TAEqual(TAInt x, TADouble y)
{
	std::cout << "Type mismatch! Cannot compare the values of different types." << std::endl;
}

TAEqual::TAEqual(TADouble x, TAInt y)
{
	std::cout << "Type mismatch! Cannot compare the values of different types." << std::endl;
}
bool TAEqual::getResult()
{
	return result;
}
void TAEqual::List()
{
	if (true)
		std::cout << TAEqual::name.c_str() << std::endl;
	else
	{
		std::cout << "( " << " )" << std::endl;
	}
}