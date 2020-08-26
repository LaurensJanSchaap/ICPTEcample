#pragma once
#include "Base.h"
class Vector
{
public:
	Vector(int x = 0, int y = 0, int z = 0);
	Vector operator+(Vector);
	void operator+=(Vector);
	void printVector();

private:
	int x, y, z;
};

class Overloading
	: public Base
{
public:
	void main();
private:
	void overloadFunction();
	void overloadOperator();
	void printType(int);
	void printType(double);
	void printType(const char[]);
};