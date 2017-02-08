#pragma once
#include "TAInt.h"
#include "TADouble.h"
#include "TACeiling.h"
#ifndef TAEqual_h
#define TAEqual_h
class TAEquals {
	static std::string name;
private:
	bool result;
public:
	TAEquals(TAInt,TAInt);
	TAEquals(TADouble,TADouble);
	TAEquals(TAInt,TACeiling);
	TAEquals(TAInt,TADouble);
	TAEquals(TADouble,TAInt);
	void isEqual(TADouble,TADouble);
	void isEqual(TAInt, TAInt);
	void isEqual(TAInt , TADouble);
	void isEqual(TADouble, TAInt);
	bool getResult();
};
#endif
