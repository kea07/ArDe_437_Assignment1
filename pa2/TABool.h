#pragma once
#include <iostream>
#ifndef TABool_h
#define TABool_h
#include "Type.h"
class TABool : public Type {
private: 
	bool value;
	static std::string name;
	std::string variableName;
public:
	TABool();
	TABool(std::string);
	void setValue(bool);
	double getValue();
	
	void List();
};

#endif