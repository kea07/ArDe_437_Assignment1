#include <cmath>
#include <iostream>
#include "TAInt.h"
#include "TABool.h"
#include "TADouble.h"
using namespace std;


class TANot {
private:
	TABool y;
public:
	TANot(TABool x)
	{
		x.getValue() ? y.setValue(false) : y.setValue(true);
	}
	TABool NOT(TABool x)
	{
		y = x;
		x.getValue() ? y.setValue(false) : y.setValue(true);
		return y;
	}
};
class TACeiling {
private:
	TAInt value;
public:
	TACeiling(TADouble x)
	{
		value.set(ceil(x.getValue()));
	}
	void setCeiling(TADouble x)
	{
		value.set(ceil(x.getValue()));
	}
	TAInt getValue()
	{
		return value;
	}
};
class TAFloor {
private:
	TAInt value;
public:
	TAFloor(TADouble x)
	{
		value.set(floor(x.getValue()));
	}
	void setFloor(TADouble x)
	{
		value.set(floor(x.getValue()));
	}
	TAInt getValue()
	{
		return value;
	}
};
class TAGreaterThan {
private:
	bool result = 0;
public:
	TAGreaterThan(TAInt x, TAInt y)
	{
		result = x.getValue() > y.getValue() ? true : false;
	}
	TAGreaterThan(TADouble x, TADouble y)
	{
		result = x.getValue() > y.getValue() ? true : false;
	}
	TAGreaterThan(TAInt x, TACeiling y)
	{
		result = x.getValue() > y.getValue().getValue() ? true : false;
	}
	TAGreaterThan(TAInt x, TADouble y)
	{
		cout << "Type mismatch! Cannot compare the values of different types." << endl;
	}
	TAGreaterThan(TADouble x, TAInt y)
	{
		cout << "Type mismatch! Cannot compare the values of different types." << endl;
	}
	void isGreaterThan(TADouble x, TADouble y)
	{
		result = x.getValue() > y.getValue() ? true : false;
	}
	void isGreaterThan(TAInt x, TAInt y)
	{
		result = x.getValue() > y.getValue() ? true : false;
	}
	void isGreaterThan(TAInt x, TADouble y)
	{
		cout << "Type mismatch! Cannot compare the values of different types." << endl;
	}
	void isGreaterThan(TADouble x, TAInt y)
	{
		cout << "Type mismatch! Cannot compare the values of different types." << endl;
	}
	bool getResult()
	{
		return result;
	}
};
class TALessThan {
private:
	bool result = 0;
public:
	TALessThan(TAInt x, TAInt y)
	{
		result = x.getValue() < y.getValue() ? true : false;
	}
	TALessThan(TADouble x, TADouble y)
	{
		result = x.getValue() < y.getValue() ? true : false;
	}
	TALessThan(TAInt x, TACeiling y)
	{
		result = x.getValue() < y.getValue().getValue() ? true : false;
	}
	TALessThan(TAInt x, TADouble y)
	{
		cout << "Type mismatch! Cannot compare the values of different types." << endl;
	}
	TALessThan(TADouble x, TAInt y)
	{
		cout << "Type mismatch! Cannot compare the values of different types." << endl;
	}
	void isLessThan(TADouble x, TADouble y)
	{
		result = x.getValue() < y.getValue() ? true : false;
	}
	void isLessThan(TAInt x, TAInt y)
	{
		result = x.getValue() < y.getValue() ? true : false;
	}
	void isLessThan(TAInt x, TADouble y)
	{
		cout << "Type mismatch! Cannot compare the values of different types." << endl;
	}
	void isLessThan(TADouble x, TAInt y)
	{
		cout << "Type mismatch! Cannot compare the values of different types." << endl;
	}
	bool getResult()
	{
		return result;
	}
};
class TAGreaterThanOrEquals {
private:
	bool result = 0;
public:
	TAGreaterThanOrEquals(TAInt x, TAInt y)
	{
		result = x.getValue() >= y.getValue() ? true : false;
	}
	TAGreaterThanOrEquals(TADouble x, TADouble y)
	{
		result = x.getValue() >= y.getValue() ? true : false;
	}
	TAGreaterThanOrEquals(TAInt x, TACeiling y)
	{
		result = x.getValue() >= y.getValue().getValue() ? true : false;
	}
	TAGreaterThanOrEquals(TAInt x, TADouble y)
	{
		cout << "Type mismatch! Cannot compare the values of different types." << endl;
	}
	TAGreaterThanOrEquals(TADouble x, TAInt y)
	{
		cout << "Type mismatch! Cannot compare the values of different types." << endl;
	}
	void isGreaterThanOrEquals(TADouble x, TADouble y)
	{
		result = x.getValue() >= y.getValue() ? true : false;
	}
	void isGreaterThanOrEquals(TAInt x, TAInt y)
	{
		result = x.getValue() >= y.getValue() ? true : false;
	}
	void isGreaterThanOrEquals(TAInt x, TADouble y)
	{
		cout << "Type mismatch! Cannot compare the values of different types." << endl;
	}
	void isGreaterThanOrEquals(TADouble x, TAInt y)
	{
		cout << "Type mismatch! Cannot compare the values of different types." << endl;
	}
	bool getResult()
	{
		return result;
	}
};
class TALessThanOrEquals {
private:
	bool result = 0;
public:
	TALessThanOrEquals(TAInt x, TAInt y)
	{
		result = x.getValue() <= y.getValue() ? true : false;
	}
	TALessThanOrEquals(TAInt x, TACeiling y)
	{
		result = x.getValue() <= y.getValue().getValue() ? true : false;
	}
	TALessThanOrEquals(TADouble x, TADouble y)
	{
		result = x.getValue() <= y.getValue() ? true : false;
	}
	TALessThanOrEquals(TAInt x, TADouble y)
	{
		cout << "Type mismatch! Cannot compare the values of different types." << endl;
	}
	TALessThanOrEquals(TADouble x, TAInt y)
	{
		cout << "Type mismatch! Cannot compare the values of different types." << endl;
	}
	void islessThanOrEquals(TADouble x, TADouble y)
	{
		result = x.getValue() <= y.getValue() ? true : false;
	}
	void islessThanOrEquals(TAInt x, TAInt y)
	{
		result = x.getValue() <= y.getValue() ? true : false;
	}
	void islessThanOrEquals(TAInt x, TADouble y)
	{
		cout << "Type mismatch! Cannot compare the values of different types." << endl;
	}
	void islessThanOrEquals(TADouble x, TAInt y)
	{
		cout << "Type mismatch! Cannot compare the values of different types." << endl;
	}
	bool getResult()
	{
		return result;
	}
};
class TAEquals {
private:
	bool result = 0;
public:
	TAEquals(TAInt x, TAInt y)
	{
		result = x.getValue() == y.getValue() ? true : false;
	}
	TAEquals(TAInt x, TACeiling y)
	{
		result = x.getValue() == y.getValue().getValue() ? true : false;
	}
	TAEquals(TADouble x, TADouble y)
	{
		result = x.getValue() == y.getValue() ? true : false;
	}
	TAEquals(TAInt x, TADouble y)
	{
		cout << "Type mismatch! Cannot compare the values of different types." << endl;
	}
	TAEquals(TADouble x, TAInt y)
	{
		cout << "Type mismatch! Cannot compare the values of different types." << endl;
	}
	void isEqual(TADouble x, TADouble y)
	{
		result = x.getValue() == y.getValue() ? true : false;
	}
	void isEqual(TAInt x, TAInt y)
	{
		result = x.getValue() == y.getValue() ? true : false;
	}
	void isEqual(TAInt x, TADouble y)
	{
		cout << "Type mismatch! Cannot compare the values of different types." << endl;
	}
	void isEqual(TADouble x, TAInt y)
	{
		cout << "Type mismatch! Cannot compare the values of different types." << endl;
	}
	bool getResult()
	{
		return result;
	}
};

/*
template <class T, class Y>
bool TAgreaterThan(T* x, Y* y)
{
	return x->getValue() >= y->getValue() ? true : false;
}
template <class T, class Y>
bool TAlessThan(T*x, Y*y)
{
	return x->getValue() < y->getValue() ? true : false;
}
template <class T, class Y>
bool TAequals(T* x, Y* y)
{
	return x->getValue() == y->getValue() ? true : false;
}
template <class T, class Y>
class TAgreaterThanOrEquals {
private:
	bool retult;
public:
	TAgreaterThanOrEquals(T* x, Y* y)
	{
		retult =  x->getValue() >= y->getValue() ? true : false;

	}
};
template <class T, class Y>
bool TAlessThanOrEquals(T* x, Y* y)
{
	return x->getValue() <= y->getValue() ? true : false;
}
*/

class TAOr {
private:
	bool result;
public:
	TAOr(TABool x, TABool y)
	{
		result = x.getValue() || y.getValue();
	}
	TAOr(TABool x, TALessThan y)
	{
		result = x.getValue() || y.getResult();
	}
	TAOr(TABool x, TALessThanOrEquals y)
	{
		result = x.getValue() || y.getResult();
	}
	TAOr(TABool x, TAGreaterThan y)
	{
		result = x.getValue() || y.getResult();
	}
	TAOr(TABool x, TAGreaterThanOrEquals y)
	{
		result = x.getValue() || y.getResult();
	}
	TAOr(TABool x, TAEquals y)
	{
		result = x.getValue() || y.getResult();
	}
	//
	TAOr(TALessThan y, TABool x)
	{
		result = x.getValue() || y.getResult();
	}
	TAOr(TAGreaterThan y, TABool x)
	{
		result = x.getValue() || y.getResult();
	}
	TAOr(TALessThanOrEquals y, TABool x)
	{
		result = x.getValue() || y.getResult();
	}
	TAOr(TAGreaterThanOrEquals y, TABool x)
	{
		result = x.getValue() || y.getResult();
	}
	TAOr(TAEquals y, TABool x)
	{
		result = x.getValue() || y.getResult();
	}
	bool getResult()
	{
		return result;
	}
};
class TAXOR {
private:
	bool result;
public:
	TAXOR(TABool x, TABool y)
	{
		result = x.getValue() != y.getValue() ? true: false;
	}
	TAXOR(TABool x, TALessThan y)
	{
		result = x.getValue() != y.getResult() ? true : false;
	}
	TAXOR(TABool x, TALessThanOrEquals y)
	{
		result = x.getValue() != y.getResult() ? true : false;
	}
	TAXOR(TABool x, TAGreaterThan y)
	{
		result = x.getValue() != y.getResult() ? true : false;
	}
	TAXOR(TABool x, TAGreaterThanOrEquals y)
	{
		result = x.getValue() != y.getResult() ? true : false;
	}
	TAXOR(TABool x, TAEquals y)
	{
		result = x.getValue() != y.getResult() ? true : false;
	}
	//
	TAXOR(TALessThan y, TABool x)
	{
		result = x.getValue() != y.getResult() ? true : false;
	}
	TAXOR(TAGreaterThan y, TABool x)
	{
		result = x.getValue() != y.getResult() ? true : false;
	}
	TAXOR(TALessThanOrEquals y, TABool x)
	{
		result = x.getValue() != y.getResult() ? true : false;
	}
	TAXOR(TAGreaterThanOrEquals y, TABool x)
	{
		result = x.getValue() != y.getResult() ? true : false;
	}
	TAXOR(TAEquals y, TABool x)
	{
		result = x.getValue() != y.getResult() ? true : false;
	}
	bool getResult()
	{
		return result;
	}
};
class TAAnd {
private:
	bool result;
public:
	TAAnd(TABool x, TABool y)
	{
		result = x.getValue() && y.getValue();
	}
	TAAnd(TABool x, TALessThan y)
	{
		result = x.getValue() && y.getResult();
	}
	TAAnd(TABool x, TALessThanOrEquals y)
	{
		result = x.getValue() && y.getResult();
	}
	TAAnd(TABool x, TAGreaterThan y)
	{
		result = x.getValue() && y.getResult();
	}
	TAAnd(TABool x, TAGreaterThanOrEquals y)
	{
		result = x.getValue() && y.getResult();
	}
	TAAnd(TABool x, TAEquals y)
	{
		result = x.getValue() && y.getResult();
	}
	//
	TAAnd(TALessThan y, TABool x)
	{
		result = x.getValue() && y.getResult();
	}
	TAAnd(TAGreaterThan y, TABool x)
	{
		result = x.getValue() && y.getResult();
	}
	TAAnd(TALessThanOrEquals y, TABool x)
	{
		result = x.getValue() && y.getResult();
	}
	TAAnd(TAGreaterThanOrEquals y, TABool x)
	{
		result = x.getValue() && y.getResult();
	}
	TAAnd(TAEquals y, TABool x)
	{
		result = x.getValue() && y.getResult();
	}
	bool getResult()
	{
		return result;
	}
};
void main()
{

	TAInt x;
	system("pause");
}