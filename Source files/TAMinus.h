#pragma once
#ifndef TAMinus_h
#define TAMinus_h
#include "TAArithmetics.h"
#include "Type.h"
#include <iostream>
#include "TAInt.h"
#include "TADouble.h"
#include "Type.h"
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

