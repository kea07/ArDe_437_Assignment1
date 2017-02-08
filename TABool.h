#pragma once
#include <iostream>
#ifndef TABool_h
#define TABool_h

class TABool {
private: 
	bool value;
	static std::string name;
	std::string variableName;
public:
	TABool();
	TABool(std::string);
	void setValue(bool);
	bool getValue();
};

#endif