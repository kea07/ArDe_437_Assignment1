#pragma once
#include "TAStatementAtomic.h"
#include "TABoolOperations.h"

class TAConditional :
	public TAStatementAtomic
{

private:
	TABoolOperations* expression;
	TAStatement* statementA;
	TAStatement* statementB;

public:
	TAConditional(TABoolOperations* expressionInput, TAStatement* statementAInput, TAStatement* statementBInput);
	~TAConditional();

	void evaluate() override;

};
