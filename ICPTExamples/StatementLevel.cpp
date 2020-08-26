#include "StatementLevel.h"
void StatementLevel::main() {
	ifStatement();
	switchStatement();
	forLoop();
	whileLoop();
	unconditional();
}

void StatementLevel::ifStatement() {
	int x = 0;
	if (x == 1) {
		//code
	}
	else if (x == 2) {
		//code
	}
	else {
		//code
	}
}

void StatementLevel::switchStatement() {
	int x = 0;
	switch (x) {
	case 0:/*code*/;
		break;
	case 1:/*code*/;
		break;
	case 2:/*code*/;
	case 3:/*code*/;
		break;
	default: /*code*/;
	}
}

void StatementLevel::forLoop() {
	int intArray[] = { 1,2,3,4 };
	for (int i : intArray) {
		std::cout << i << std::endl;
	}

	for (int i = 0;i < 20;i++) {
		std::cout << i << std::endl;
	}
}

void StatementLevel::whileLoop() {
	int i = 0;
	while (i < 10) {
		std::cout << i << std::endl;
		i++;
	}

	i = 0;
	do {
		std::cout << i << std::endl;
		i++;
	} while (i < 10);
}

void StatementLevel::unconditional() {
	goto skip;
	std::cout << "Skipped" << std::endl;
	std::cout << "Skipped" << std::endl;
	std::cout << "Skipped" << std::endl;
	std::cout << "Skipped" << std::endl;
	std::cout << "Skipped" << std::endl;
	std::cout << "Skipped" << std::endl;
	std::cout << "Skipped" << std::endl;
	std::cout << "Skipped" << std::endl;
	std::cout << "Skipped" << std::endl;

	skip: std::cout << "Not skipped" << std::endl;
}