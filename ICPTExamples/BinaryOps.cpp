#include <iostream>
#include "BinaryOps.h"

void BinaryOps::main() {
	XAND();
	std::cout << std::endl;
	OR();
	std::cout << std::endl;
	XOR();
	std::cout << std::endl;
	compliment();
	std::cout << std::endl;
	shiftL();
	std::cout << std::endl;
	shiftR();
}

void BinaryOps::XAND() {
	std::cout << "XAND" << std::endl;
	std::cout << "0 & 0 = " << (0 & 0) << std::endl;
	std::cout << "0 & 1 = " << (0 & 1) << std::endl;
	std::cout << "1 & 0 = " << (1 & 0) << std::endl;
	std::cout << "1 & 1 = " << (1 & 1) << std::endl;
}

void BinaryOps::OR() {
	std::cout << "OR" << std::endl;
	std::cout << "0 | 0 = " << (0 | 0) << std::endl;
	std::cout << "0 | 1 = " << (0 | 1) << std::endl;
	std::cout << "1 | 0 = " << (1 | 0) << std::endl;
	std::cout << "1 | 1 = " << (1 | 1) << std::endl;
}

void BinaryOps::XOR() {
	std::cout << "XOR" << std::endl;
	std::cout << "0 ^ 0 = " << (0 ^ 0) << std::endl;
	std::cout << "0 ^ 1 = " << (0 ^ 1) << std::endl;
	std::cout << "1 ^ 0 = " << (1 ^ 0) << std::endl;
	std::cout << "1 ^ 1 = " << (1 ^ 1) << std::endl;
}

void BinaryOps::shiftL() {
	std::cout << "SHIFT LEFT" << std::endl;
	std::cout << "1 << 1 = " << (1 << 1) << std::endl;
	std::cout << "1 << 2 = " << (1 << 2) << std::endl;
}

void BinaryOps::shiftR() {
	std::cout << "SHIFT RIGHT" << std::endl;
	std::cout << "8 >> 1 = " << (8 >> 1) << std::endl;
	std::cout << "8 >> 2 = " << (8 >> 2) << std::endl;
	std::cout << "1 >> 4 = " << (1 >> 4) << std::endl;
}

void BinaryOps::compliment() {
	std::cout << "Compliment:" << std::endl;
	std::cout << "~0 = " << ~0 << std::endl;
	std::cout << "~1 = " << ~1 << std::endl;
}