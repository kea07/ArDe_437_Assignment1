#include "TAStatementList.h"

TAStatementList::TAStatementList(TAStatementAtomic* atomicInput, TAStatement* input){
	atomic = atomicInput;
	statement = input;
}

TAStatementList::~TAStatementList(){}