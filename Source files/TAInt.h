#pragma once
#ifndef TAInt_h
#define TAInt_h
#include <iostream>
#include "TANumber.h"
class TAInt :public TANumber {
	static std::string name;
private:
	int value;
	std::string variableName;
public:
	TAInt();
	TAInt(std::string);
	void set(int);
	int getValue();
	void List();
};
#endif 
