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
	bool result;
public:
	TAOr(TABool , TABool );
	TAOr(TABool , TALessThan );
	TAOr(TABool , TALessThanOrEquals );
	TAOr(TABool , TAGreaterThan );
	TAOr(TABool , TAGreaterThanOrEquals );
	TAOr(TABool , TAEquals );
	//
	TAOr(TALessThan , TABool );
	TAOr(TAGreaterThan , TABool );
	TAOr(TALessThanOrEquals , TABool );
	TAOr(TAGreaterThanOrEquals , TABool );
	TAOr(TAEquals , TABool );
	bool getResult();
};
#endif
