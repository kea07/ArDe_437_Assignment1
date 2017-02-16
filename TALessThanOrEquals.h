#pragma once
#include "TAInt.h"
#include "TADouble.h"
#include "TACeiling.h"
#ifndef TALessThanOrEquals_h
#define TALessThanOrEquals_h
class TALessThanOrEquals {
	static std::string name;
private:
	bool result;
	TADouble value1;
	TADouble value2;
public:
	TALessThanOrEquals(TAInt,TAInt);
	TALessThanOrEquals(TADouble,TADouble);
	TALessThanOrEquals(TAInt,TACeiling);
	TALessThanOrEquals(TAInt,TADouble);
	TALessThanOrEquals(TADouble,TAInt);
	void evaluate();
	bool getResult();
	void List();
};
#endif
