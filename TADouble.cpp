#include "TADouble.h"
std::string TADouble::name = "TADouble";
TADouble::TADouble()
{
}

TADouble::TADouble(std::string str)
{
	variableName = str;
}

void TADouble::setValue(double x)
{
	value = x;
}

double TADouble::getValue()
{
	return value;
}
void TADouble::List()
{
	if (variableName == "")
		std::cout << TADouble::name.c_str() << std::endl;
	else
	{
		std::cout << "( " << variableName.c_str() << " )" << std::endl;
	}
}