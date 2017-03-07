#pragma once
#ifndef TAMult_h
#define TAMult_h
#include "TAArithmetics.h"
#include "Type.h"
#include <iostream>
#include "TAInt.h"
#include "TADouble.h"
#include "Type.h"
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

