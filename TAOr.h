#pragma once
#include <iostream>
#include"TABool.h"
#include"TALessThan.h"
#include"TALessThanOrEquals.h"
#include"TAGreaterThan.h"
#include "TAGreaterThanOrEquals.h";
#include "TAEqual.h"
#ifndef TAOr_h
#define TAOr_h
class TAOr {
	static std::string name;
private:
	TABool result;
	TABool value1;
	TABool value2;
public:
	TAOr(TABool , TABool );
	TAOr(TABool , TALessThan );
	TAOr(TABool , TALessThanOrEquals );
	TAOr(TABool , TAGreaterThan );
	TAOr(TABool , TAGreaterThanOrEquals );
	TAOr(TABool , TAEqual );
	//
	TAOr(TALessThan , TABool );
	TAOr(TAGreaterThan , TABool );
	TAOr(TALessThanOrEquals , TABool );
	TAOr(TAGreaterThanOrEquals , TABool );
	TAOr(TAEqual , TABool );
	void evaluate();
	TABool getResult();
	void List();
};
#endif
