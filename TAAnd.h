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
public:
	TAAnd(TABool , TABool );
	TAAnd(TABool , TALessThan );
	TAAnd(TABool , TALessThanOrEquals );
	TAAnd(TABool , TAGreaterThan );
	TAAnd(TABool , TAGreaterThanOrEquals );
	TAAnd(TABool , TAEquals );
	//
	TAAnd(TALessThan , TABool );
	TAAnd(TAGreaterThan , TABool );
	TAAnd(TALessThanOrEquals , TABool );
	TAAnd(TAGreaterThanOrEquals , TABool );
	TAAnd(TAEquals , TABool );
	bool getResult();
};
#endif
