#include "TAListSequential.h"



TAListSequential::TAListSequential(TAStatementAtomic* atomicInput, TAStatement* input)
	: TAStatementList(atomicInput, input){}


TAListSequential::~TAListSequential(){}

void TAListSequential::evaluate(){
	atomic->evaluate();
	statement->evaluate();
}