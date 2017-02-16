#pragma once
#include <iostream>
#include"TABool.h"
#include"TALessThan.h"
#include"TALessThanOrEquals.h"
#include"TAGreaterThan.h"
#include "TAGreaterThanOrEquals.h";
#include "TAEqual.h"
#ifndef TAXOR_h
#define TAXOR_h
class TAXOR {
	static std::string name;
private:
	TABool result;
	TABool value1;
	TABool value2;
public:
	TAXOR(TABool , TABool );
	TAXOR(TABool , TALessThan );
	TAXOR(TABool , TALessThanOrEquals );
	TAXOR(TABool , TAGreaterThan );
	TAXOR(TABool , TAGreaterThanOrEquals );
	TAXOR(TABool , TAEqual );
	//
	TAXOR(TALessThan , TABool );
	TAXOR(TAGreaterThan , TABool );
	TAXOR(TALessThanOrEquals , TABool );
	TAXOR(TAGreaterThanOrEquals , TABool );
	TAXOR(TAEqual , TABool );
	void evaluate();
	TABool getResult();
	void List();
};
#endif
