#pragma once
#ifndef TANumber_h
#define TANumber_h
#include "Type.h"
class TANumber : public Type {
private:

public:
	virtual void List();
	virtual double getValue();
	virtual void setValue(double);

};
#endif
