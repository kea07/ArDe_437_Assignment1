#pragma once
#ifndef TAMinus_h
#define TAMinus_h
#include <iostream>
#include "../Types/Type.h"
#include "../Types/TAInt.h"
#include "../Types/TADouble.h"
#include "TAArithmetics.h"

class TAMinus : public TAArithmetics {
	static std::string name;
private:
	TANumber &firstOperand;
	TANumber &secondOperand;
	Type &result;
public:
	TAMinus();
	TAMinus(TANumber&, TANumber&);
	void evaluate();
	void List();

};
#endif 

