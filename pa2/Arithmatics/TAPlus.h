#pragma once
#ifndef TAPlus_h
#define TAPlus_h
#include <iostream>
#include "../Types/Type.h"
#include "../Types/TAInt.h"
#include "../Types/TADouble.h"
#include "TAArithmetics.h"

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

