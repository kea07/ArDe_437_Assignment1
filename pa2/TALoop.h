#pragma once
#include "TAStatementAtomic.h"
#include "TABoolOperations.h"

class TALoop : public TAStatementAtomic{

private:
	TAStatement* statement;
	TABoolOperations* expression;

public:
	TALoop(TAStatement* input, TABoolOperations* expressionInput);
	~TALoop();

	void evaluate() override;

};