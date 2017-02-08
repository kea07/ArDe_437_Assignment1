#pragma once
#include "TAInt.h"
#include "TADouble.h"
#include "TACeiling.h"
#ifndef TALessThan_h
#define TALessThan_h
class TALessThan {
	static std::string name;
private:
	bool result;
public:
	TALessThan(TAInt,TAInt);
	TALessThan(TADouble,TADouble);
	TALessThan(TAInt,TACeiling);
	TALessThan(TAInt,TADouble);
	TALessThan(TADouble,TAInt);
	void isGreaterThan(TADouble,TADouble);
	void isGreaterThan(TAInt, TAInt);
	void isGreaterThan(TAInt , TADouble);
	void isGreaterThan(TADouble, TAInt);
	bool getResult();
};
#endif
