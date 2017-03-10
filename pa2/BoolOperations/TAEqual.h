#pragma once
#include "../Types/TAInt.h"
#include "../Types/TADouble.h"
#include "TACeiling.h"
#include "TABoolOperations.h"
#ifndef TAEqual_h
#define TAEqual_h

class TAEqual:public TABoolOperations {
	static std::string name;
private:
	TABool result;
	TADouble value1;
	TADouble value2;
public:
	TAEqual(TAInt,TAInt);
	TAEqual(TADouble,TADouble);
	TAEqual(TAInt,TACeiling);
	TAEqual(TAInt,TADouble);
	TAEqual(TADouble,TAInt);
	void evaluate();
	TABool getResult();
	void List();
};
#endif
