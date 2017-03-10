#pragma once
#include <iostream>
#include "Type.h"
#ifndef TABool_h
#define TABool_h

class TABool : public Type {
private: 
	bool value;
	static std::string name;
	std::string variableName;
public:
	TABool();
	TABool(std::string);
	void setValue(bool);
	bool getValue();
	void List();
};

#endif