#include "TAArray.h"
string TAArray::name = "TAArray";
TAArray::TAArray()
{

}
TAArray::TAArray(string arrayName, string type, TAInt size)
{
	this->size = size;
	this->arrayName = arrayName;
	/*
	if (type == "TAInt")
		arr = new TAInt[int(size.getValue())];
	if (type == "TADouble")
		arr = new TADouble[size.getValue()];
	if (type == "TABool")
		arr = new TADouble[size.getValue()];
	if (type == "TAArray")
		arr = new TAArray[size.getValue()];
	if (type == "TAPair")
		arr = new TAPair[size.getValue()];*/
	LastFilledIndex.setValue(0);
}
void TAArray::List()
{
	cout << name.c_str();
}

void TAArray::addItem(Type &item)
{
	vector.push_back(&item);
	/*if (LastFilledIndex.getValue() < size.getValue())
	{
		arr[int(LastFilledIndex.getValue())] = item;
	//	arr[int(LastFilledIndex.getValue())].List();
		LastFilledIndex.setValue(LastFilledIndex.getValue() + 1);
	}*/
}

Type * TAArray::ArryayAccess(TAInt index)
{
	return vector.at(index.getValue());
	//return arr[int(index.getValue())];
}

TAInt TAArray::getSize()
{
	return size;
}
