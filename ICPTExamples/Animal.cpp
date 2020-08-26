#include "Animal.h"

Animal::Animal(std::string name) {
	std::cout << "Creating animal object" << std::endl;
	this->name = name;
}

void Animal::jump() {
	std::cout << "Jumping animal" << std::endl;
}

std::string Animal::getName() {
	return "Animal name: " + this->name;
}