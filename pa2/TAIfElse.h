#pragma once
#ifndef TAIfElse_h
#define TAIfElse_h
#include "TAFormula.h"
class TAIfElse : public TAFormula {
	static std::string name;
private:
	TAFormula* ifTrue;
	TAFormula* ifFalse;
	TAFormula* checkFormula;
	TABool result;
public:
	TAIfElse(TAFormula&, TAFormula&, TAFormula&);
	void evaluate();
	void List();
	TABool getResult();
	std::string getOperationsName();



};
#endif
