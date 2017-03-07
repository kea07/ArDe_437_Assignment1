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
#include <list>
#include "TAArray.h"
using namespace std;
void main()
{
	TAInt x("integer");
	TADouble y("double");
	TAPair g (x,y);
	g.List();
	cout << endl;
	system("pause");
}