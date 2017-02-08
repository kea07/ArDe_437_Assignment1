#include "TAFloor.h"
std::string TAFloor::name = "TAFloor";
TAFloor::TAFloor(TADouble x)
{
	value.set(floor(x.getValue()));
}

void TAFloor::setFloor(TADouble x)
{
	value.set(floor(x.getValue()));
}

TAInt TAFloor::getValue()
{
	return value;
}
