#pragma once
#ifndef TAArray_h
#define TAArray_h
#include <iostream>
#include "Type.h"
#include "TAInt.h"
#include "TAPair.h"
#include "TADouble.h"
#include <vector>
using namespace std;

class TAArray : public Type {
	static std::string name;
private:
	std::vector<Type*> vector;
	string arrayName;
	TAInt LastFilledIndex;
	TAInt size;
public:
	TAArray();
	TAArray(string arrayName, string type, TAInt size);
	void List();
	void addItem(Type&);
	Type *ArryayAccess(TAInt);
	TAInt getSize();
	double getValue();
};
#endif
