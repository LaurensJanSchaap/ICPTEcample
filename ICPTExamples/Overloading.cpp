#include "Overloading.h"

Vector::Vector(int x, int y, int z) : x(x), y(y), z(z)
{};

void Vector::printVector() {
	std::cout << "x: " << this->x << " | y: " << this->y << " | z: " << this->z << std::endl;
}

void Vector::operator+=(Vector other) {
	this->x += other.x;
	this->y += other.y;
	this->z += other.z;
}

Vector Vector::operator+(Vector other) {
	return Vector(this->x + other.x, this->y + other.y, this->z + other.z);
}


void Overloading::main() {
	overloadFunction();
	overloadOperator();
}

void Overloading::overloadFunction() {
	printType(1);
	printType(1.1);
	printType("Hello");
}

void Overloading::overloadOperator() {
	Vector vec(2, 3, 4);
	Vector vec2(1, 2, 3);

	Vector vec3 = vec + vec2;	//x: 1+2 = 3 | y: 2+3 = 5 | z: 3+4 = 7
	vec += vec3;				//x: 2+3 = 5 | y: 3+5 = 8 | z: 4+7 = 11

	vec3.printVector();
	vec.printVector();
}

void Overloading::printType(int value) {
	std::cout << "Integer " << value << " received\n";
}

void Overloading::printType(double value) {
	std::cout << "Double " << value << " received\n";
}

void Overloading::printType(const char value[]) {
	std::cout << "Char array " << value << " received\n";
}
