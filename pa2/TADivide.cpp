#include "TADivide.h"
std::string TADivide::name = "TADivide";
TADivide::TADivide() : firstOperand(this->firstOperand), secondOperand(this->firstOperand), result(result)
{
}
TADivide::TADivide(TANumber &first, TANumber &second) :
	firstOperand(first), secondOperand(second), result(result)
{
	this->firstOperand = first;
	this->secondOperand = second;
}
void TADivide::evaluate()
{
	this->result = new TADouble();
	result->setValue(firstOperand.getValue() / secondOperand.getValue());
}
void TADivide::List()
{
	if (name == "TADivide")
	{
		std::cout << TADivide::name.c_str() << std::endl;
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