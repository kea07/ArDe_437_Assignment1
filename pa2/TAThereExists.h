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
	std::vector<Type*> vector;
	Type* variable;
	std::string operationName;
public:
	TAThereExists(TADomain, std::string , Type&);
	void evaluate();
	void List();
	std::string getOperationName();
	TABool getResult();
};
#endif 
