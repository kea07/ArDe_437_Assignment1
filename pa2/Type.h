#pragma once
#ifndef Type_h
#define Type_h
enum primitaveType {
	
};
class Type {
public:
	virtual void List() = 0;
	virtual Type* getValue()=0;
};
#endif