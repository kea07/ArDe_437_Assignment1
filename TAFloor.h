#pragma once
#ifndef TAFloor_h
#define TAFloor_h
#include "TAInt.h"
#include "TADouble.h"

class TAFloor {
	static std::string name;
private:
	TAInt value;
public:
	TAFloor(TADouble);
	void setFloor(TADouble);
	TAInt getValue();
};
#endif