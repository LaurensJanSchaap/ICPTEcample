#pragma once
#include "Base.h"
class ObjectAllocation :
    public Base
{
public:
	void main();
	void scopeExample();
};


class Box {
public:
	Box(char* label);
	~Box();
	void printLabel();
private:
	char* label;
};
