#include <cmath>
#include <iostream>
#include "TAInt.h"
#include "TABool.h"
#include "TANot.h"
#include "TADouble.h"
#include "TACeiling.h"
#include "TAFloor.h"
#include "TAGreaterThan.h"
#include "TALessThan.h"
#include "TAGreaterThanOrEquals.h"
#include "TALessThanOrEquals.h"
#include "TAEqual.h"
#include "TAOr.h"
#include "TAAnd.h"
#include "TAXOR.h"
#include "Type.h"
#include "TAPair.h"
#include "TAArray.h"
#include <list>
#include "TAThereExists.h"
#include "TAArray.h"
#include "TAArithmetics.h"
#include "TAPlus.h"
#include <vector>
#include "TADomain.h"
#include "TAIfElse.h"
using namespace std;
void main()
{
	std::vector<Type*> ff;
	/*
	Type* arr = new TAInt[2];
	arr = new TAInt[16];
	for (int i = 0; i < 2; i++)
	{
		arr[i] = TAInt();
		arr[i].List();
	}
	//*/
	
	TAInt x("integer");
	x.setValue(16);
	ff.push_back(&x);
	ff.push_back(&x);
	TADouble y("double");
	x.setValue(16);
	y.setValue(3);
	TAPair g (x,y);
	g.List();
	cout << endl;
	TAPlus k(x,y);
	k.evaluate();
	k.print();
	std::vector<double> mm;
	std::vector<double>::iterator it = mm.begin();
	mm.insert(it,3);
	std::list<double> kl;
	TAInt *consta;
	consta = new TAInt[16];
	x.setValue(16);
	cout << sizeof(TAInt);
	TAArray arrayy("h", "TAInt", x);
	for (int i = 0; i < 16; i++)
	{
		consta[i].setValue(14);
		arrayy.addItem(consta[i]);
	}
	x.setValue(1);
	Type *pp = arrayy.ArryayAccess(x);
	TADomain constan("TAInt");
	constan.fill(arrayy);
	std::vector<Type*> hh = constan.getVector();
	hh.at(1)->List();
	TALessThanOrEquals u(x,y);
	
	cout << u.getOperationName().c_str();
//	u.getOperands().first().List();
	//hh.
	//kl.insert(3);
	constan.getVector().at(0)->List();
	//TALessThan(constan.getVector().at(0), constan.getVector().at(0));
	x.setValue(14);
	string uu = "TAEqual";
	TAThereExists yy(constan,uu,x);
	yy.evaluate();
	cout << endl;
	cout << yy.getResult().getValue();



	system("pause");
}