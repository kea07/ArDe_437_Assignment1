#pragma once
#include <iostream>
#include "../Types/TABool.h"
#include "TABoolOperations.h"
#ifndef TAXOR_h
#define TAXOR_h

class TAXOR : public TABoolOperations {
	static std::string name;
private:
	TABool result;
	TABool value1;
	TABool value2;
public:
	TAXOR(TABool, TABool);
	TAXOR(TABool, TABoolOperations&);
	TAXOR(TABoolOperations&, TABool);
	TAXOR(TABoolOperations&, TABoolOperations&);

	void evaluate();
	TABool getResult();
	void List();
};
#endif
