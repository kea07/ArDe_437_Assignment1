#pragma once
#include <iostream>
#ifndef TADouble_h
#define TADouble_h
class TADouble {
	static std::string name;
private: 
	double value;
	std::string variableName;
public:
	TADouble();
	TADouble(std::string);
	void setValue(double);
	double getValue();
};
#endif