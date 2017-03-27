#pragma once
#ifndef TAForall_h
#define TAForAll_h
#include "TAFormula.h"
#include "TABoolOperations.h"
#include "TANumber.h"
#include "TACeiling.h"
class TAForAll : public TAFormula {
private:
	static std::string name;
	TABool result;
	TABoolOperations* operation;
	std::vector<Type*> vector;
	Type* variable;
	std::string operationName;
public:
	TAForAll(TADomain, std::string, Type&);
	void evaluate();
	//virtual void evaluate(TADomain, std::string operationName, Type&);
	//virtual void evaluate(TADomain, std::string operationName, TADouble);
	//virtual void evaluate(TADomain, std::string operationName, TACeiling);
	void List();
	std::string getOperationName();
	TABool getResult();
};
#endif 