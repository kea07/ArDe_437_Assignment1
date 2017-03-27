#include "TAPlus.h"
std::string TAPlus::name = "TAPlus";
TAPlus::TAPlus(): firstOperand(this->firstOperand),secondOperand(this->firstOperand),result(result)
{
}
TAPlus::TAPlus(TANumber &first, TANumber &second) :
	firstOperand(first), secondOperand(second),result(result)
{
	this->firstOperand = first;
	this->secondOperand = second;
}
void TAPlus::print()
{
	std::cout << result->getValue() << std::endl;
}
void TAPlus::evaluate()
{
	this->result = new TADouble();
	result->setValue(firstOperand.getValue() + secondOperand.getValue());
}
void TAPlus::List()
{
	if (name == "TAPlus")
	{
		std::cout << TAPlus::name.c_str() << std::endl;
	}
	else
	{
		std::cout << "(";
		firstOperand.List();
		std::cout << ", ";
		secondOperand.List();
		std::cout << ")";
	}
}