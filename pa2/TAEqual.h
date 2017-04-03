#pragma once
#include "TAInt.h"
#include "TADouble.h"
#include "TACeiling.h"
#include "TABoolOperations.h"
#include "TAPair.h"
#include "TAFormula.h"
#ifndef TAEqual_h
#define TAEqual_h

class TAEqual:public TAFormula {
	static std::string name;
private:
	TABool result;
	TADouble value1;
	TADouble value2;
public:
	TAEqual(Type*, Type*);
	TAEqual(TAInt,TAInt);
	TAEqual(TADouble,TADouble);
	TAEqual(TAInt,TACeiling);
	TAEqual(TAInt,TADouble);
	TAEqual(TADouble,TAInt);
	void evaluate();
	TABool getResult();
	void List();
	std::string getOperationName();
	TAPair getOperands();
};
#endif
