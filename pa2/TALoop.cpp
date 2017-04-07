#include "TALoop.h"

TALoop::TALoop(TAStatement * input, TABoolOperations * expressionInput){
	statement = input;
	expression = expressionInput;
}

TALoop::~TALoop(){}

void TALoop::evaluate(){
	expression->evaluate();

	while (*(bool*)expression->getValue())	{
		statement->evaluate();
		expression->evaluate();
	}
}