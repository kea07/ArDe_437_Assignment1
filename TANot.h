#pragma once
#ifndef TANot_h
#define TANot_h
#include "TABool.h"


class TANot {
	static std::string name;
private:
	TABool y;
public:
	TANot(TABool);
	void set(TABool);
	TABool getValue();
};
#endif