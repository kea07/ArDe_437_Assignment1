#pragma once
#ifndef TAFormula_h
#define TAFormula_h
#include"TABoolOperations.h"
#include <vector>
#include "TAConstant.h"
#include "TADomain.h"
class TAFormula : public TABoolOperations {
private:
public:
	virtual void evaluate() = 0;
	TABool getResult() = 0;
};
#endif