#pragma once
#ifndef TADomain_h
#define TADomain_h
#include <iostream>
#include <list>
#include <vector>
#include "TAConstant.h"
#include "Type.h"
#include "TAArray.h"
class TADomain {
	static std::string name;
private:
	std::vector<Type*> domainVector;
	std::string domainName;
public:
	TADomain(string name);
	void fill(Type*);
	void fill(TAArray);
	std::vector<Type*> getVector();
	void list();

	
};
#endif 
