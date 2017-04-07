#pragma once
#include "TABool.h"
#include "TABoolOperations.h"
#include "TAStatementAtomic.h"

class TAAssignment : public TAStatementAtomic {
private:
	TABool* target;
	TABoolOperations* expression;

public:
	TAAssignment(TABool* target, TABoolOperations* expressionInput);
	~TAAssignment();

	void evaluate() override;
	void evaluateExpression();
	void assign();
};