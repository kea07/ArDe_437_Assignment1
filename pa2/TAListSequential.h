#pragma once
#include "TAStatementList.h"

class TAListSequential : public TAStatementList{
public:
	TAListSequential(TAStatementAtomic* atomicInput, TAStatement* input);
	~TAListSequential();

	void evaluate() override;
};