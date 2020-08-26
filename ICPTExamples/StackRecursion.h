#pragma once
#include "Base.h"
class StackRecursion :
    public Base
{
public:
	void main();
private:
	void stackie(int i);
	int fibonacci(int);
};

