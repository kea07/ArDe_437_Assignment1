#pragma once
#ifndef TANot_h
#define TANot_h
#include "TABool.h"
#include "TABoolOperations.h"
#include "TAFormula.h"
class TANot:public TAFormula {
	static std::string name;
private:
	TABool y;
	TABool result;
public:
	TANot(TABool);
	void set(TABool);
	void evaluate();
	TABool getValue();
	void List();
};
#endif