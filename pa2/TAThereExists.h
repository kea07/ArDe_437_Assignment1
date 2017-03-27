#pragma once
#ifndef TAThereExists_h
#define TAThereExists_h
#include "TAFormula.h"
#include "TABoolOperations.h"
#include "TANumber.h"
#include "TACeiling.h"
class TAThereExists : public TAFormula {
private:
	static std::string name;
	TABool result;
	TABoolOperations* operation;
public:
	virtual void evaluate(TADomain, std::string operationName, TAInt);
	virtual void evaluate(TADomain, std::string operationName, TADouble);
	virtual void evaluate(TADomain, std::string operationName, TACeiling);

	TABool getResult();
};
#endif 
