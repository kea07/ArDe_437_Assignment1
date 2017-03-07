#pragma once
#ifndef TAPair_h
#define TAPair_h
#include "Type.h"
#include <iostream>
#include "TABool.h"
using namespace std;
class TAPair:public Type {
	static std::string name;
private:
	Type &FirstElement;
	Type &SecondElement;
	TABool isInitialized;
public:
	TAPair();
	TAPair(Type &FirstElement, Type &SecondElement);
	void List();
	Type &first();
	Type &next();
};
#endif
