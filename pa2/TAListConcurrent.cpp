#include "TAListConcurrent.h"


TAListConcurrent::TAListConcurrent(TAStatementAtomic* atomicInput, TAStatement* input)
	: TAStatementList(atomicInput, input){}


TAListConcurrent::~TAListConcurrent(){}

void TAListConcurrent::evaluate(){
	TAAssignment * assignment = (TAAssignment*)atomic;
	assignment->evaluateExpression();
	statement->evaluate();
	assignment->assign();
}