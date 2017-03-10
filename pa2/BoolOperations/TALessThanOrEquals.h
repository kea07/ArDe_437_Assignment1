#pragma once
#include "../Types/TAInt.h"
#include "../Types/TADouble.h"
#include "TACeiling.h"
#include "TABoolOperations.h"
#ifndef TALessThanOrEquals_h
#define TALessThanOrEquals_h

class TALessThanOrEquals :public TABoolOperations {
	static std::string name;
private:
	TABool result;
	TADouble value1;
	TADouble value2;
public:
	TALessThanOrEquals(TAInt,TAInt);
	TALessThanOrEquals(TADouble,TADouble);
	TALessThanOrEquals(TAInt,TACeiling);
	TALessThanOrEquals(TAInt,TADouble);
	TALessThanOrEquals(TADouble,TAInt);
	void evaluate();
	TABool getResult();
	void List();
};
#endif
