#pragma once
#include "Base.h"
#include <string>
#include <iostream>

class Animal{
public:
	Animal(std::string name);
	void jump();
	virtual void makeSound() = 0;
	virtual std::string getName();

protected:
	std::string name;
};