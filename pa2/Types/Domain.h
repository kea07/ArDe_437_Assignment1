#pragma once
#ifndef Domain_h
#define Domain_h
#include "TABool.h"
#include "TAArray.h"
#include "../BoolOperations/TABoolOperations.h"
using namespace std;

class Domain : public TAArray {
	static std::string name;
public:

private:
	Domain();
	Domain(string domainName, string type, TAInt size);
	void List();
	void addItem(Type&);
	Type &ArryayAccess(TAInt);

	TABool isAll(TABoolOperations bo);
	TABool has(TABoolOperations bo);
};
#endif
