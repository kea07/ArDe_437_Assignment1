#pragma once
#include <iostream>
#include"TABool.h"
#include"TALessThan.h"
#include"TALessThanOrEquals.h"
#include"TAGreaterThan.h"
//#include "TAGreaterThanOrEquals.h";
#include "TAEqual.h"
#include "TABoolOperations.h"
#ifndef TAOr_h
#define TAOr_h
class TAOr : public TAFormula {
	static std::string name;
private:
	TABool result;
	TABool value1;
	TABool value2;
public:
	TAOr(TABool, TABool);
	TAOr(TABool, TABoolOperations&);
	TAOr(TABoolOperations&, TABool);
	TAOr(TABoolOperations&, TABoolOperations&);


	void evaluate();
	TABool getResult();
	void List();
};
#endif
