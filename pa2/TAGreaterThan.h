#pragma once
#include "TAInt.h"
#include "TADouble.h"
#include "TACeiling.h"
#include "TABoolOperations.h";
#ifndef TAGreaterThan_h
#define TAGreaterThan_h
class TAGreaterThan:public TABoolOperations {
	static std::string name;
private:
	TABool result;
	TADouble value1;
	TADouble value2;
public:
	void evaluate();
	TAGreaterThan(Type*, Type*);
	TAGreaterThan(TAInt,TAInt);
	TAGreaterThan(TADouble,TADouble);
	TAGreaterThan(TAInt,TACeiling);
	TAGreaterThan(TAInt,TADouble);
	TAGreaterThan(TADouble,TAInt);
	TABool getResult();
	void List();
	std::string getOperationName();
	TAPair getOperands();
};
#endif
