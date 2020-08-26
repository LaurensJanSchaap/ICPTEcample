#pragma once
#include "Base.h"

template <class T>
class SomeObject {
public:
	SomeObject(T);
	void printValue();
	T getValue();
private:
	T value;
};

class Generic :
    public Base
{
public:
	void main();
};

