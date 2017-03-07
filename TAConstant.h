#pragma once
#ifndef TAConstant_h
#define TAConstant_h
#include "Type.h"
#include <iostream>
class TAConstant : public Type{
	static std::string name;
private:
	double value;
	bool initialized;
	std::string variableName;
public:
	TAConstant(double);
	TAConstant(std::string);
	double getValue();
	void List();
};
#endif 
