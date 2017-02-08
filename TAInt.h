#pragma once
#ifndef TAInt_h
#define TAInt_h
class TAInt {
	static std::string name;
private:
	int value;
	std::string variableName;
public:
	TAInt();
	TAInt(std::string);
	void set(int);
	int getValue();
};
#endif 
