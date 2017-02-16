#include "TACeiling.h"
std::string TACeiling::name = "TACeiling";

TACeiling::TACeiling(TADouble x)
{
	value1 = x;
}

void TACeiling::setCeiling(TADouble x)
{
	value1 = x;
}
void TACeiling::evaluate()
{
	result.set(ceil(value1.getValue()));
}
TAInt TACeiling::getValue()
{
	return result;
}
void TACeiling::List()
{
	if (true)
		std::cout << TACeiling::name.c_str() << std::endl;
	else
	{
		std::cout << "( " << " )" << std::endl;
	}
}
