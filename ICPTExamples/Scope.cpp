#include "Scope.h"

int Scope::doAction() {
	int result = scopeVriable + 5;
	return result;
}

int Scope::determineScope() {
	int scopeVriable = 2;
	return doAction();
}

void Scope::main() {
	std::cout << determineScope() << std::endl;
}
