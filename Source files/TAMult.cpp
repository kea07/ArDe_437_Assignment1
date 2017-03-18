#include "TAMult.h"
std::string TAMult::name = "TAMult";
TAMult::TAMult() : firstOperand(this->firstOperand), secondOperand(this->firstOperand), result(result)
{
}
TAMult::TAMult(TANumber &first, TANumber &second) :
	firstOperand(first), secondOperand(second), result(result)
{
	this->firstOperand = first;
	this->secondOperand = second;
}
void TAMult::evaluate()
{
	this->result = new TADouble();
	result->setValue(firstOperand.getValue() / secondOperand.getValue());
}
void TAMult::List()
{
	if (name == "TAMult")
	{
		std::cout << TAMult::name.c_str() << std::endl;
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