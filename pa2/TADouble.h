#pragma once
#include <iostream>
#ifndef TADouble_h
#define TADouble_h
#include "TANumber.h"
class TADouble: public TANumber {
	static std::string name;
private: 
	double value;
	std::string variableName;
public:
	TADouble();
	TADouble(std::string);
	void setValue(double);
	double getValue();
	void List();
};
#endif