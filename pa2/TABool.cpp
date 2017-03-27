#include "TABool.h"
std::string TABool::name = "TABool";
TABool::TABool()
{
}
TABool::TABool(std::string str)
{
	variableName = str;
}

void TABool::setValue(bool x)
{
	value = x;
}

TABool *TABool::getValue()
{
	TABool x;
	x.setValue(this->value);
	return &x;
}
void TABool::List()
{
	if (name == "TABool")
		std::cout << TABool::name.c_str() << std::endl;
	else
	{
		std::cout << "( " << variableName.c_str() << " )" << std::endl;
	}
}
