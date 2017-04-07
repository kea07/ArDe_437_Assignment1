#pragma once
#include "TAStatementAtomic.h"

class TAStatementList : public TAStatement {
protected:
	TAStatementAtomic* atomic;
	TAStatement* statement;
public:
	TAStatementList(TAStatementAtomic* atomicInput, TAStatement* input);
	~TAStatementList();
};