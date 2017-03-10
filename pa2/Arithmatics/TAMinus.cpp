#include "TAMinus.h"

std::string TAMinus::name = "TAMinus";
TAMinus::TAMinus() : firstOperand(this->firstOperand), secondOperand(this->firstOperand), result(result){}

TAMinus::TAMinus(TANumber &first, TANumber &second) :
	firstOperand(first), secondOperand(second), result(result)
{
	this->firstOperand = first;
	this->secondOperand = second;
}
void TAMinus::evaluate()
{

}
void TAMinus::List()
{
	if (name == "TAMinus")
	{
		std::cout << TAMinus::name.c_str() << std::endl;
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