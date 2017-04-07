#pragma once
#include "TAStatementList.h"
#include "TAAssignment.h"
class TAListConcurrent : public TAStatementList {
public:
	TAListConcurrent(TAStatementAtomic* atomicInput, TAStatement* input);
	~TAListConcurrent();

	void evaluate() override;
};