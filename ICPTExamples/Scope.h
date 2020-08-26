#pragma once
#include "Base.h"
class Scope :
    public Base
{
public:
	void main();
private:
	int scopeVriable = 10;
	int determineScope();
	int doAction();
};

