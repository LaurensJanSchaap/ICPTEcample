#include "Cat.h"
Cat::Cat(std::string name) : Animal(name) {
	std::cout << "Creating cat object" << std::endl;
}

void Cat::jump() {
	std::cout << "Jumping cat" << std::endl;
}

void Cat::makeSound() {
	std::cout << "Hissssssss" << std::endl;
}

std::string Cat::getName() {
	return "Mr. "+this->name;
}