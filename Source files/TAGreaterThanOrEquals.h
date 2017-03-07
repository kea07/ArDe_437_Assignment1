#pragma once
#include "TAInt.h"
#include "TADouble.h"
#include "TACeiling.h"
#include "TABoolOperations.h"
#ifndef TAGreaterThanOrEquals_h
#define TAGreaterThanOrEquals_h
class TAGreaterThanOrEquals :public TABoolOperations {
	static std::string name;
private:
	TABool result;
	TADouble value1;
	TADouble value2;
public:
	TAGreaterThanOrEquals(TAInt,TAInt);
	TAGreaterThanOrEquals(TADouble,TADouble);
	TAGreaterThanOrEquals(TAInt,TACeiling);
	TAGreaterThanOrEquals(TAInt,TADouble);
	TAGreaterThanOrEquals(TADouble,TAInt);
	TABool getResult();
	void evaluate();
	void List();
};
#endif
