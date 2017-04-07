#include "TAAssignment.h"



TAAssignment::TAAssignment(TABool* target, TABoolOperations* expressionInput){
	//check if target and expression or of same type
	target = target;
	expression = expressionInput;
}


TAAssignment::~TAAssignment(){}

void TAAssignment::evaluate(){
	evaluateExpression();
	assign();
}

void TAAssignment::evaluateExpression(){
	expression->evaluate();
}

void TAAssignment::assign(){
	target->setValue(expression->getResult().getValue());
}