#include "Dog.h"

Dog::Dog(std::string name): Animal(name) {
	std::cout << "Creating dog object" << std::endl;
}

void Dog::jump() {
	std::cout << "Jumping dog" << std::endl;
}
void Dog::makeSound() {
	std::cout << "Bark" << std::endl;
}