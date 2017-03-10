#pragma once
#include <iostream>
#include "../Types/TABool.h"
#include "TABoolOperations.h"
#ifndef TAOr_h
#define TAOr_h

class TAOr : public TABoolOperations {
	static std::string name;
private:
	TABool result;
	TABool value1;
	TABool value2;
public:
	TAOr(TABool, TABool);
	TAOr(TABool, TABoolOperations&);
	TAOr(TABoolOperations&, TABool);
	TAOr(TABoolOperations&, TABoolOperations&);


	void evaluate();
	TABool getResult();
	void List();
};
#endif
