#pragma once
#include "TAInt.h"
#include "TADouble.h"
#include "TACeiling.h"
#ifndef TAGreaterThanOrEquals_h
#define TAGreaterThanOrEquals_h
class TAGreaterThanOrEquals {
	static std::string name;
private:
	bool result;
	TADouble value1;
	TADouble value2;
public:
	TAGreaterThanOrEquals(TAInt,TAInt);
	TAGreaterThanOrEquals(TADouble,TADouble);
	TAGreaterThanOrEquals(TAInt,TACeiling);
	TAGreaterThanOrEquals(TAInt,TADouble);
	TAGreaterThanOrEquals(TADouble,TAInt);
	bool getResult();
	void evaluate();
	void List();
};
#endif
