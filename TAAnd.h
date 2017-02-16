#pragma once
#include <iostream>
#include"TABool.h"
#include"TALessThan.h"
#include"TALessThanOrEquals.h"
#include"TAGreaterThan.h"
#include "TAGreaterThanOrEquals.h";
#include "TAEqual.h"
#ifndef TAAnd_h
#define TAAnd_h
class TAAnd {
	static std::string name;
private:
	bool result;
	bool value1;
	bool value2;
public:
	TAAnd(TABool , TABool );
	TAAnd(TABool , TALessThan );
	TAAnd(TABool , TALessThanOrEquals );
	TAAnd(TABool , TAGreaterThan );
	TAAnd(TABool , TAGreaterThanOrEquals );
	TAAnd(TABool , TAEqual );
	//
	TAAnd(TALessThan , TABool );
	TAAnd(TAGreaterThan , TABool );
	TAAnd(TALessThanOrEquals , TABool );
	TAAnd(TAGreaterThanOrEquals , TABool );
	TAAnd(TAEqual , TABool );
	void evaluate();
	bool getResult();
	void List();
};
#endif
