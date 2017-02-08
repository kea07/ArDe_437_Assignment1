#pragma once
#include "TAInt.h"
#include "TADouble.h"
#ifndef TACeiling_h
#define TACeiling_h

class TACeiling {
	static std::string name;
private:
	TAInt value;
public:
	TACeiling(TADouble);
	void setCeiling(TADouble);
	TAInt getValue();
};
#endif