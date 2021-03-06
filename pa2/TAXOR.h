#pragma once
#include <iostream>
#include"TABool.h"
#include"TALessThan.h"
#include"TALessThanOrEquals.h"
#include"TAGreaterThan.h"
//#include "TAGreaterThanOrEquals.h";
#include "TAEqual.h"
#include "TABoolOperations.h"
#ifndef TAXOR_h
#define TAXOR_h
class TAXOR : public TAFormula {
	static std::string name;
private:
	TABool result;
	TABool value1;
	TABool value2;
public:
	TAXOR(TABool, TABool);
	TAXOR(TABool, TABoolOperations&);
	TAXOR(TABoolOperations&, TABool);
	TAXOR(TABoolOperations&, TABoolOperations&);


	void evaluate();
	TABool getResult();
	void List();
};
#endif
