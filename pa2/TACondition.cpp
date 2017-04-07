#include "TACondition.h"

TAConditional::TAConditional(TABoolOperations* expressionInput, TAStatement* statementAInput, TAStatement* statementBInput){
	expression = expressionInput;
	statementA = statementAInput;
	statementB = statementBInput;
}

TAConditional::~TAConditional(){}

void TAConditional::evaluate(){
	expression->evaluate();

	if (*(bool*)expression->getValue()){
		statementA->evaluate();
	}else{
		statementB->evaluate();
	}
}