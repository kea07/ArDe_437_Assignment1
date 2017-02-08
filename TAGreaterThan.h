#pragma once
#include "TAInt.h"
#include "TADouble.h"
#include "TACeiling.h"
#ifndef TAGreaterThan_h
#define TAGreaterThan_h
class TAGreaterThan {
	static std::string name;
private:
	bool result;
public:
	TAGreaterThan(TAInt,TAInt);
	TAGreaterThan(TADouble,TADouble);
	TAGreaterThan(TAInt,TACeiling);
	TAGreaterThan(TAInt,TADouble);
	TAGreaterThan(TADouble,TAInt);
	void isGreaterThan(TADouble,TADouble);
	void isGreaterThan(TAInt, TAInt);
	void isGreaterThan(TAInt , TADouble);
	void isGreaterThan(TADouble, TAInt);
	bool getResult();
};
#endif
