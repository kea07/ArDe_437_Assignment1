#pragma once
#include "TAInt.h"
#include "TADouble.h"
#include "TACeiling.h"
#ifndef TAEqual_h
#define TAEqual_h
class TAEqual {
	static std::string name;
private:
	bool result;
	TADouble value1;
	TADouble value2;
public:
	TAEqual(TAInt,TAInt);
	TAEqual(TADouble,TADouble);
	TAEqual(TAInt,TACeiling);
	TAEqual(TAInt,TADouble);
	TAEqual(TADouble,TAInt);
	void evaluate();
	bool getResult();
	void List();
};
#endif
