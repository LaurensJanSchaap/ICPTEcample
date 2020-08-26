#pragma once
#include "Base.h"
class BinaryOps: public Base
{
public:
	void main();

private:
	void XAND();
	void OR();
	void XOR();
	void compliment();
	void shiftL();
	void shiftR();
};