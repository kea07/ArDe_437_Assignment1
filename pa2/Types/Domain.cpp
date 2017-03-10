#include "Domain.h"

string Domain::name = "Domain";
Domain::Domain(){}

Domain::Domain(string arrayName, string type, TAInt size){
	this->size = size;
	this->arrayName = arrayName;
	if (type == "TAInt")
		arr = new TAInt[size.getValue()];
	if (type == "TADouble")
		arr = new TADouble[size.getValue()];
	if (type == "TABool")
		arr = new TADouble[size.getValue()];
	if (type == "TAArray")
		arr = new TAArray[size.getValue()];
	if (type == "TAPair")
		arr = new TAPair[size.getValue()];
	if (type == "Domain")
		arr = new Domain[size.getValue()];
	LastFilledIndex.set(0);
}
void Domain::List(){
	cout << name.c_str();
}

void Domain::addItem(Type &item){
	if (LastFilledIndex.getValue() < size.getValue()){
		arr[LastFilledIndex.getValue()] = item;
		LastFilledIndex.set(LastFilledIndex.getValue() + 1);
	}
}

Type & Domain::ArryayAccess(TAInt index){
	return arr[index.getValue()];
}

//Checks if all the values in the domain obide by the boolean operation
TABool isAll(TABoolOperations bo){
	for (){//loop over all elements of the domain
		//if one does not satisfy return FALSE
	}
	//return TRUE;
}


//Checks if at least one of the values in the domain obides by the boolean operation
TABool has(TABoolOperations bo){
	for (){//loop over all elements of the domain
		//if one satisfies return TRUE
	}
	//return FALSE;
}