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
public:
	TAGreaterThanOrEquals(TAInt,TAInt);
	TAGreaterThanOrEquals(TADouble,TADouble);
	TAGreaterThanOrEquals(TAInt,TACeiling);
	TAGreaterThanOrEquals(TAInt,TADouble);
	TAGreaterThanOrEquals(TADouble,TAInt);
	void isGreaterThan(TADouble,TADouble);
	void isGreaterThan(TAInt, TAInt);
	void isGreaterThan(TAInt , TADouble);
	void isGreaterThan(TADouble, TAInt);
	bool getResult();
};
#endif
