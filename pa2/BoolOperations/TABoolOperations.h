#pragma once
#include "../Types/TABool.h"
#ifndef TABoolOperations_h
#define TABoolOperations_h

class TABoolOperations {
	virtual void List() = 0;
public:
	virtual TABool getResult();
};
#endif 
