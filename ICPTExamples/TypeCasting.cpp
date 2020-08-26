#include "TypeCasting.h"

void TypeCasting::main() {
	doubleToInt();
	intToChar();
	stringToData();
}

void TypeCasting::doubleToInt() {
	int x = 2.5;
	double y = x + .6;
	std::cout << x << ' ' << y << std::endl;
}

void TypeCasting::intToChar() {
	int x = 5;
	char y = x + 92;
	std::cout << (int)y << ' ' << y << std::endl;
	x = y;
	std::cout << x << std::endl;
}

void TypeCasting::stringToData() {
	std::string stringInt = "1";
	std::string stringDouble = "1.5";

	int i = std::stoi(stringInt);
	double j = std::stod(stringDouble);

	std::cout << i << " " << j << std::endl;
}