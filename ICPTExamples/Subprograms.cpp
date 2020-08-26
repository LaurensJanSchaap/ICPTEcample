#include "Subprograms.h"

auto Subprograms::closure(int x) {
	return [x](int y) {
		return x + y;
	};
}

void Subprograms::main() {
	auto f = closure(5);
	std::cout << f(3) << std::endl;
	std::cout << f(9) << std::endl;
}