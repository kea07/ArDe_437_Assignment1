#include "TAArray.h"

string TAArray::name = "TAArray";
TAArray::TAArray(){}

TAArray::TAArray(string arrayName, string type, TAInt size)
{
	this->size = size;
	this->arrayName = arrayName;
	if (type == "TAInt")
		arr = new TAInt[size.getValue()];
	if (type == "TADouble")
		arr = new TADouble[size.getValue()];
	if (type == "TABool")
		arr = new TADouble[size.getValue()];
	if (type == "TAArray")
		arr = new TAArray[size.getValue()];
	if (type == "TAPair")
		arr = new TAPair[size.getValue()];
	LastFilledIndex.set(0);
}
void TAArray::List()
{
	cout << name.c_str();
}

void TAArray::addItem(Type &item)
{
	if (LastFilledIndex.getValue() < size.getValue())
	{
		arr[LastFilledIndex.getValue()] = item;
		LastFilledIndex.set(LastFilledIndex.getValue() + 1);
	}
}

Type & TAArray::ArryayAccess(TAInt index)
{
	return arr[index.getValue()];
}
