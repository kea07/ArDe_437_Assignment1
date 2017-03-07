#pragma once
#ifndef TADivide_h
#define TADivide_h
#include "TAArithmetics.h"
#include "Type.h"
#include <iostream>
#include "TAInt.h"
#include "TADouble.h"
#include "Type.h"
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

