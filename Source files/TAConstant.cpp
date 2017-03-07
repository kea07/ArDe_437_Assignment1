#include "TAConstant.h"
std::string TAConstant::name = "TAConstant";
TAConstant::TAConstant(double value)
{
	this->value = value;
}

TAConstant::TAConstant(std::string str)
{
	variableName = str;
	initialized = true;
}


double TAConstant::getValue()
{
	return value;
}
void TAConstant::List()
{
	if (variableName == "TAConstant")
		std::cout << TAConstant::name.c_str() << std::endl;
	else
	{
		std::cout << "( " << variableName.c_str() << " )" << std::endl;
	}
}