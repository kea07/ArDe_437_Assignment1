#include "TAThereExists.h"
#include "TALessThanOrEquals.h"
void TAThereExists::evaluate(TADomain domain, std::string operationName, TAInt variable)
{
	std::vector<Type*> vector = domain.getVector();
	this->operation = operation;
	if (operationName == "TALessThanOrEqual")
	{
		for (std::vector<Type*>::iterator it = vector.begin(); it != vector.end(); ++it)
		{
			//this->operation = new TALessThanOrEquals(vector.at(0), variable);
			this->operation->evaluate();
			if (this->operation->getResult().getValue() == true)
			{
				result.setValue(true);
				break;
			}
			else
				result.setValue(false);
		}
	}
}

void TAThereExists::evaluate(TADomain domain, std::string operationName, TADouble variable)
{
	std::vector<Type*> vector = domain.getVector();
	this->operation = operation;
	if (operationName == "TALessThanOrEqual")
	{
		for (std::vector<Type*>::iterator it = vector.begin(); it != vector.end(); ++it) 
		{
			//this->operation = new TALessThanOrEquals(it, variable);
			this->operation->evaluate();
			if (this->operation->getResult().getValue() == true)
				result.setValue(true);
			else
				result.setValue(false);
		}
	}
}

void TAThereExists::evaluate(TADomain domain, std::string operationName, TACeiling variable)
{
	std::vector<Type*> vector = domain.getVector();
	this->operation = operation;
	if (operationName == "TALessThanOrEqual")
	{
		for (std::vector<Type*>::iterator it = vector.begin(); it != vector.end(); ++it) 
		{
		//	this->operation = new TALessThanOrEquals(variable, variable);
			this->operation->evaluate();
			if (this->operation->getResult().getValue() == true)
				result.setValue(true);
			else
				result.setValue(false);
		}
	}
}

TABool TAThereExists::getResult()
{
	return result;
}
