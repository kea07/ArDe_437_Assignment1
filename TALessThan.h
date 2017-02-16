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
	TADouble value1;
	TADouble value2;
public:
	TALessThan(TAInt,TAInt);
	TALessThan(TADouble,TADouble);
	TALessThan(TAInt,TACeiling);
	TALessThan(TAInt,TADouble);
	TALessThan(TADouble,TAInt);
	void evaluate();
	bool getResult();
	void List();
};
#endif
