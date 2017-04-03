#pragma once
#include "TAInt.h"
#include "TADouble.h"
#include "TACeiling.h"
#include "TABoolOperations.h"
#include "TAFormula.h"
#ifndef TALessThan_h
#define TALessThan_h
class TALessThan:public TAFormula {
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
	std::string getOperationName();
	TALessThan(Type * , Type * );
//	TAPair getOperands();
};
#endif
