#include "TADomain.h"
std::string TADomain::name = "TADomain";
TADomain::TADomain(string name)
{
	domainName = name;
}
void TADomain::fill(Type* item)
{
	this->domainVector.push_back(item);
}

void TADomain::fill(TAArray item)
{

//	domainVector = new vector<TAConstant>; //= new vector<TAConstant>;
	TAInt currentIndex;
	//domainVector.(item.getSize().getValue());
	for (int i = 0; i < item.getSize().getValue(); i++)
	{
		currentIndex.setValue(i);
		this->domainVector.push_back(item.ArryayAccess(currentIndex));
	}
}

std::vector<Type*> TADomain::getVector()
{
	return domainVector;
}

void TADomain::list()
{
	std::cout << name.c_str() << std::endl;
}
