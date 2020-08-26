#include "ParameterPassing.h"

void ParameterPassing::main() {
	common(1, 2, 3);
	defaults(1);
	defaults(1,2);
	arbitrary(4, 5, 6, 7, 8);

	int x = 2;
}

void ParameterPassing::common(int x, int y, int z) {
	std::cout << x << " " << y << " " << z << std::endl;
}

void ParameterPassing::defaults(int x, int y, int z) {
	std::cout << x << " " << y << " " << z << std::endl;
}

void ParameterPassing::arbitrary(int total, ...) {
	va_list variables;
	va_start(variables, total);
	for (int i = 0;i < total;i++)
		std::cout << va_arg(variables, int) << " ";
	std::cout << std::endl;
	va_end(variables);
}