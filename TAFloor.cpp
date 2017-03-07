#include "TAFloor.h"
std::string TAFloor::name = "TAFloor";

TAFloor::TAFloor(TADouble x)
{
	value1 = x;
}

void TAFloor::setFloor(TADouble x)
{
	value1 = x;
}
void TAFloor::evaluate()
{
	result.set(ceil(value1.getValue()));
}
TAInt TAFloor::getValue()
{
	return result;
}
void TAFloor::List()
{
	if (true)
		std::cout << TAFloor::name.c_str() << std::endl;
	else
	{
		std::cout << "( ";
		value1.List();
		std::cout << " )" << std::endl;
	}
}
