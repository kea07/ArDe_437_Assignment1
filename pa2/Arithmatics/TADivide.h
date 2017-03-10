#pragma once
#ifndef TADivide_h
#define TADivide_h
#include <iostream>
#include "../Types/Type.h"
#include "../Types/TAInt.h"
#include "../Types/TADouble.h"
#include "TAArithmetics.h"

class TADivide : public TAArithmetics {
	static std::string name;
private:
	TANumber &firstOperand;
	TANumber &secondOperand;
	Type &result;
public:
	TADivide();
	TADivide(TANumber&, TANumber&);
	void evaluate();
	void List();

};
#endif 

