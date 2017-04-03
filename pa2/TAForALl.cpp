#include "TAForALl.h"
#include "TALessThanOrEquals.h"
#include "TAEqual.h"
#include "TAGreaterThan.h"
#include "TAGreaterThanOrEquals.h"
#include "TALessThan.h"
#include "TALessThanOrEquals.h"
TAForAll::TAForAll(TADomain domain, std::string operationName, Type &variable)
{
	this->operationName = operationName;
	this->vector = domain.getVector();
	this->variable = &variable;
}

void TAForAll::evaluate()
{
	if (this->operationName == "TAEqual")
	{
		int x = 0;
		for (std::vector<Type*>::iterator it = vector.begin(); it != vector.end(); ++it)
		{
			this->operation = new TAEqual(vector.at(x++), variable);
			this->operation->evaluate();
			if (this->operation->getResult().getValue() == false)
			{
				result.setValue(false);
				break;
			}
			else
				result.setValue(true);
		}
	}
	else
		if (this->operationName == "TAGreaterThan")
		{
			int x = 0;
			for (std::vector<Type*>::iterator it = vector.begin(); it != vector.end(); ++it)
			{
				this->operation = new TAGreaterThan(vector.at(x++), variable);
				this->operation->evaluate();
				if (this->operation->getResult().getValue() == false)
				{
					result.setValue(false);
					break;
				}
				else
					result.setValue(true);
			}
		}
		else
			if (this->operationName == "TAGreaterThanOrEquals")
			{
				int x = 0;
				for (std::vector<Type*>::iterator it = vector.begin(); it != vector.end(); ++it)
				{
					this->operation = new TAGreaterThanOrEquals(vector.at(x++), variable);
					this->operation->evaluate();
					if (this->operation->getResult().getValue() == false)
					{
						result.setValue(false);
						break;
					}
					else
						result.setValue(true);
				}
			}
			else
				if (this->operationName == "TALessThan")
				{
					int x = 0;
					for (std::vector<Type*>::iterator it = vector.begin(); it != vector.end(); ++it)
					{
						this->operation = new TALessThan(vector.at(x++), variable);
						this->operation->evaluate();
						if (this->operation->getResult().getValue() == false)
						{
							result.setValue(false);
							break;
						}
						else
							result.setValue(true);
					}
				}
				else
					if (this->operationName == "TALessThanOrEquals")
					{
						int x = 0;
						for (std::vector<Type*>::iterator it = vector.begin(); it != vector.end(); ++it)
						{
							this->operation = new TALessThanOrEquals(vector.at(x++), variable);
							this->operation->evaluate();
							if (this->operation->getResult().getValue() == false)
							{
								result.setValue(false);
								break;
							}
							else

								result.setValue(true);
						}
					}
}

void TAForAll::List()
{
}

std::string TAForAll::getOperationName()
{
	return std::string();
}

TABool TAForAll::getResult()
{
	return TABool();
}
