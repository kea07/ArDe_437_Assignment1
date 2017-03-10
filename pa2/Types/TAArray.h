#pragma once
#ifndef TAArray_h
#define TAArray_h
#include <iostream>
#include "Type.h"
#include "TAInt.h"
#include "TAPair.h"
#include "TADouble.h"
using namespace std;

class TAArray : public Type {
	static std::string name;
public:
	Type *arr;
	string arrayName;
	TAInt LastFilledIndex;
	TAInt size;
private:
	TAArray();
	TAArray(string arrayName, string type, TAInt size);
	void List();
	void addItem(Type&);
	Type &ArryayAccess(TAInt);
};
#endif
