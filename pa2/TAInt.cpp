#include <iostream>
#include "TAInt.h"
#ifndef TAInt_cpp
#define TAInt_cpp
#include <string>
std::string TAInt::name = "TAInt";
TAInt::TAInt()
{

}
TAInt::TAInt(std::string str)
{
	variableName = str;
}
void TAInt::setValue(int x)
{
	value = x;
}
double TAInt::getValue()
{
	return int(value);
}
void TAInt::List()
{
	if (variableName == "")
		std::cout << TAInt::name; 
	else
	{
		std::cout <<  variableName ;
	}
}
#endif