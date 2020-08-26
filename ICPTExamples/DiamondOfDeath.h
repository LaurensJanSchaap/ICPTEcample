#pragma once
#include "Base.h"
#include <vector>

class DiamondOfDeath :
public Base{
public:
	void main();
};

class Vehicle {
public:
	virtual void inWater() = 0;
	virtual void onLand() = 0;
};

class Boat : virtual public Vehicle {
public:
	virtual void inWater();
	virtual void onLand();
	void printEngine();
};

class Car : virtual public Vehicle {
public:
	virtual void inWater();
	virtual void onLand();
	void printWheelCount();
};



class Hybrid : public Boat, public Car {
public:
	void inWater();
	void onLand();
};