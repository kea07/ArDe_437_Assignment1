#pragma once
#ifndef TAPlus_h
#define TAPlus_h
#include "TAArithmetics.h"
#include "Type.h"
#include <iostream>
#include "TAInt.h"
#include "TADouble.h"
#include "Type.h"
class TAPlus : public TAArithmetics {
	static std::string name;
private:
	TANumber &firstOperand;
	TANumber &secondOperand;
	Type &result;
public:
	TAPlus();
	TAPlus(TANumber&, TANumber&);
	void evaluate();
	void List();

};
#endif 

