#pragma once
#include <iostream>
#include <string>
#include "TANumber.h"
#ifndef TADouble_h
#define TADouble_h

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