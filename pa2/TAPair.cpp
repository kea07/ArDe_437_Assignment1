#include "TAPair.h"
std::string TAPair::name = "TAPair";
TAPair::TAPair() :
	FirstElement(this->FirstElement), SecondElement(this->SecondElement)
{
	isInitialized.setValue(false);
}
TAPair::TAPair(Type &first, Type &second):
	FirstElement(first),SecondElement(second)
{
	this->FirstElement = first;
	this->SecondElement = second;
}

void TAPair::List() 
{
	if (!isInitialized.getValue())
	{
		cout << TAPair::name.c_str() << endl;
	}
	else
	{
		cout << "(";
		FirstElement.List();
		cout << ", ";
		SecondElement.List();
		cout << ")";
	}
}

Type &TAPair::first()
{
	return FirstElement;
}

Type &TAPair::next()
{
	return SecondElement;
}

double TAPair::getValue()
{
	return 0.0;
}
