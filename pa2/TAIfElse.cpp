#include "TAIfElse.h"
std::string TAIfElse::name = "TAIfElse";

TAIfElse::TAIfElse(TAFormula& checkForumla, TAFormula& ifTrue, TAFormula& ifFalse)
{
	this->checkFormula = checkFormula;
	this->ifTrue = &ifTrue;
	this->ifFalse = &ifFalse;
}
void TAIfElse::evaluate()
{
	this->checkFormula->getResult().getValue() ? this->result.setValue(this->ifTrue->getResult().getValue()) :
		this->result.setValue(this->ifFalse->getResult().getValue());
}

void TAIfElse::List()
{
	std::cout << name.c_str() << "(";
	checkFormula->List();
	std::cout << "?";
	ifTrue->List();
	std::cout << ":";
	ifFalse->List();
	std::cout << ")" << std::endl;
}

TABool TAIfElse::getResult()
{
	return result;
}

std::string TAIfElse::getOperationsName()
{
	return "TAIfElse";
}
