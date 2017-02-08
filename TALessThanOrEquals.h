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
public:
	TALessThanOrEquals(TAInt,TAInt);
	TALessThanOrEquals(TADouble,TADouble);
	TALessThanOrEquals(TAInt,TACeiling);
	TALessThanOrEquals(TAInt,TADouble);
	TALessThanOrEquals(TADouble,TAInt);
	void isLessThanOrEquals(TADouble,TADouble);
	void isLessThanOrEquals(TAInt, TAInt);
	void isLessThanOrEquals(TAInt , TADouble);
	void isLessThanOrEquals(TADouble, TAInt);
	bool getResult();
};
#endif
