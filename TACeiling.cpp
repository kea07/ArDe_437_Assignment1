#include "TACeiling.h"
std::string TACeiling::name = "TACeiling";

TACeiling::TACeiling(TADouble x)
{
	value.set(ceil(x.getValue()));
}

void TACeiling::setCeiling(TADouble x)
{
	value.set(ceil(x.getValue()));
}

TAInt TACeiling::getValue()
{
	return value;
}
