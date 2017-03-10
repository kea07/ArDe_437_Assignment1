#pragma once
#include <iostream>
#include "../Types/Type.h"
#ifndef TAConstant_h
#define TAConstant_h

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
