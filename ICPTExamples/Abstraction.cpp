#include "Abstraction.h"

Animal* animals[2];
void Abstraction::main() {
	Cat cat("Pokoe");
	Dog dog("Tarzaned");

	animals[0] = &cat;
	animals[1] = &dog;
	
	cat.jump();
	polymorphism();
}

void Abstraction::polymorphism() {
	for (Animal *animal : animals) {
		std::cout << animal->getName() << std::endl;
		animal->makeSound();
		animal->jump();
	}
}