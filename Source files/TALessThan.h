#pragma once
#include "TAInt.h"
#include "TADouble.h"
#include "TACeiling.h"
#include "TABoolOperations.h"
#ifndef TALessThan_h
#define TALessThan_h
class TALessThan:public TABoolOperations {
	static std::string name;
private:
	TABool result;
	TADouble value1;
	TADouble value2;
public:
	TALessThan(TAInt,TAInt);
	TALessThan(TADouble,TADouble);
	TALessThan(TAInt,TACeiling);
	TALessThan(TAInt,TADouble);
	TALessThan(TADouble,TAInt);
	void evaluate();
	TABool getResult();
	void List();
};
#endif
