#include "TAXOR.h"
std::string TAXOR::name = "TAXOR";
TAXOR::TAXOR(TABool x, TABool y)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getValue());
}

TAXOR::TAXOR(TABool x, TALessThan y)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getResult());

}

TAXOR::TAXOR(TABool x, TALessThanOrEquals y)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getResult());

}

TAXOR::TAXOR(TABool x, TAGreaterThan y)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getResult());

}

TAXOR::TAXOR(TABool x, TAGreaterThanOrEquals y)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getResult());

}

TAXOR::TAXOR(TABool x, TAEqual y)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getResult());

}

TAXOR::TAXOR(TALessThan y, TABool x)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getResult());

}

TAXOR::TAXOR(TAGreaterThan y, TABool x)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getResult());

}

TAXOR::TAXOR(TALessThanOrEquals y, TABool x)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getResult());

}

TAXOR::TAXOR(TAGreaterThanOrEquals y, TABool x)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getResult());

}

TAXOR::TAXOR(TAEqual y, TABool x)
{
	value1.setValue(x.getValue());
	value2.setValue(y.getResult());
}
TABool TAXOR::getResult()
{
	return result;
}
void TAXOR::evaluate()
{
	result.setValue(value1.getValue() != value2.getValue());
}
void TAXOR::List()
{
	if (true)
		std::cout << TAXOR::name.c_str() << std::endl;
	else
	{
		std::cout << "( " << " )" << std::endl;
	}
}
