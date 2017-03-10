#include <list>
#include <cmath>
#include <iostream>
#include "Types/TAInt.h"
#include "Types/TABool.h"
#include "Types/TAPair.h"
#include "Types/TAArray.h"
#include "Types/TADouble.h"
#include "BoolOperations/TAOr.h"
#include "BoolOperations/TAAnd.h"
#include "BoolOperations/TAXOR.h"
#include "BoolOperations/TANot.h"
#include "BoolOperations/TAEqual.h"
#include "BoolOperations/TAFloor.h"
#include "BoolOperations/TACeiling.h"
#include "BoolOperations/TALessThan.h"
#include "BoolOperations/TAGreaterThan.h"
#include "BoolOperations/TALessThanOrEquals.h"
#include "BoolOperations/TAGreaterThanOrEquals.h"
using namespace std;
void main()
{
	TAInt x("x");
	TADouble d("d");
	TACeiling y(d); // denotes y is the ceiling of d
	TABool b("b");
	TALessThan t1(x, y); // denotes x < y
	t1.List();
	TAAnd t2(b, t1); // denotes b and t1
	t2.List();// should print: (& b (< x (ceiling d ) ) )
	x.set(5);
	d.setValue(2.3);
	b.setValue(true);
	t1.evaluate();
	t1.getResult();// should print: false
	d.setValue(5.3);
	t1.evaluate();
	t1.getResult();// should print: true
	system("pause");
}