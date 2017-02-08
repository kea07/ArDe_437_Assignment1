#include "TANot.h"
std::string TANot::name = "TANot";
TANot::TANot(TABool x)
{
	x.getValue() ? y.setValue(false) : y.setValue(true);
}
void TANot::set(TABool x)
{
	y = x;
	x.getValue() ? y.setValue(false) : y.setValue(true);
}
TABool TANot::getValue()
{
	return TABool();
}
