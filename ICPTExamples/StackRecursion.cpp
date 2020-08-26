#include "StackRecursion.h"

void StackRecursion::main() {
	//stackie(0);
	std::cout << fibonacci(10) << std::endl;
}

void StackRecursion::stackie(int i) {
	std::cout << "Position: " << i << std::endl;
	stackie(i + 1);
	std::cout << "Done " << i << std::endl;
}

int StackRecursion::fibonacci(int n) {
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}