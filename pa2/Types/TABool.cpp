#include "TABool.h"

std::string TABool::name = "TABool";
TABool::TABool(){}

TABool::TABool(std::string str)
{
	variableName = str;
}

void TABool::setValue(bool x)
{
	value = x;
}

bool TABool::getValue()
{
	return value;
}
void TABool::List()
{
	std::cout << "( " << variableName.c_str() << " )";
}
