#include "TANot.h"
std::string TANot::name = "TANot";
TANot::TANot(TABool x)
{
	y = x;
}
void TANot::set(TABool x)
{
	y = x;
}
void TANot::evaluate()
{
	result.setValue(!y.getValue());
}
TABool TANot::getValue()
{
	return TABool();
}
void TANot::List()
{
	if (true)
		std::cout << TANot::name.c_str() << std::endl;
	else
	{
		std::cout << "( " << " )" << std::endl;
	}
}