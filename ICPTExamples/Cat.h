#pragma once
#include "Animal.h"
class Cat :
    public Animal
{
public:
    Cat(std::string name);
    void jump();
    void makeSound();
    std::string getName();
};

