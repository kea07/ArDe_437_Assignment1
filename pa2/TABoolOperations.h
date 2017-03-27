#pragma once
#ifndef TABoolOperations_h
#define TABoolOperations_h
#include "TABool.h"
#include "TAPair.h"
class TABoolOperations {
private:
	virtual void List() = 0;
public:
	virtual TABool getResult() = 0;
	virtual std::string getOperationName() = 0;
	virtual TAPair getOperands() = 0;
	virtual void evaluate() = 0;
};
#endif 
