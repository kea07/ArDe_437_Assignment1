#pragma once
#ifndef TAMult_h
#define TAMult_h
#include <iostream>
#include "../Types/Type.h"
#include "../Types/TAInt.h"
#include "../Types/TADouble.h"
#include "TAArithmetics.h"

class TAMult : public TAArithmetics {
	static std::string name;
private:
	TANumber &firstOperand;
	TANumber &secondOperand;
	Type &result;
public:
	TAMult();
	TAMult(TANumber&, TANumber&);
	void evaluate();
	void List();

};
#endif 

