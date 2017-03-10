#pragma once
#include <iostream>
#include "../Types/TABool.h"
#include "TABoolOperations.h"
#ifndef TAAnd_h
#define TAAnd_h

class TAAnd : public TABoolOperations {
	static std::string name;
private:
	TABool result;
	TABool value1;
	TABool value2;
public:
	TAAnd(TABool , TABool );
	TAAnd(TABool , TABoolOperations&);
	TAAnd(TABoolOperations&, TABool );
	TAAnd(TABoolOperations&, TABoolOperations&);

	void evaluate();
	TABool getResult();
	void List();
};
#endif
