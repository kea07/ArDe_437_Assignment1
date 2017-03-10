#pragma once
#include "../Types/TAInt.h"
#include "../Types/TADouble.h"
#ifndef TAFloor_h
#define TAFloor_h

class TAFloor {
	static std::string name;
private:
	TAInt result;
	TADouble value1;
public:
	TAFloor(TADouble);
	void setFloor(TADouble);
	TAInt getValue();
	void evaluate();
	void List();
};
#endif