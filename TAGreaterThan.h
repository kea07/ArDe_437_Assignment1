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
	TADouble value1;
	TADouble value2;
public:
	void evaluate();
	TAGreaterThan(TAInt,TAInt);
	TAGreaterThan(TADouble,TADouble);
	TAGreaterThan(TAInt,TACeiling);
	TAGreaterThan(TAInt,TADouble);
	TAGreaterThan(TADouble,TAInt);
	bool getResult();
	void List();
};
#endif
