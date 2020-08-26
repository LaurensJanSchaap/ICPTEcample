#include "References.h"

void References::main() {
	int value = 2;

	passByValue(value);
	std::cout << value << std::endl;
	passByRefference(&value);
	std::cout << value << std::endl;
}

void References::passByValue(int x) {
	x = 5;
}

void References::passByRefference(int *x) {
	*x = 5;
}