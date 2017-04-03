#pragma once
#include <iostream>
#include"TABool.h"
#include"TALessThan.h"
#include"TALessThanOrEquals.h"
#include"TAGreaterThan.h"
//#include "TAGreaterThanOrEquals.h";
#include "TAEqual.h"
#include "TABoolOperations.h"
#ifndef TAAnd_h
#define TAAnd_h
class TAAnd : public TAFormula {
	static std::string name;
private:
	TABool result;
	TABool value1;
	TABool value2;
public:
	TAAnd(TABool , TABool );
	TAAnd(TABool , TABoolOperations&);
	TAAnd(TABoolOperations&, TABool );
	TAAnd(TABoolOperations&, TABoolOperations&);


	void evaluate();
	TABool getResult();
	void List();
};
#endif
