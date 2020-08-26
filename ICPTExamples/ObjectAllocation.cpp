#include "ObjectAllocation.h"

Box::Box(char* label) : label(label) {
	std::cout << "Box with label " << label << " is being created" << std::endl;
}

Box::~Box() {
	std::cout << "Box labeled " << this->label << " is being destroyed" << std::endl;
}

void Box::printLabel() {
	std::cout << "Box label is " << this->label << std::endl;
}

void ObjectAllocation::scopeExample() {
	char label[5] = "Nike";
	Box box(label);
	box.printLabel();
}

void ObjectAllocation::main() {
	scopeExample();
	std::cout << "\n Out of scope \n " << std::endl;

	char label[6] = { "Addis" };
	Box* box = new Box(label);

	box->printLabel();
	delete box;
	std::cout << "Not out off scope, but already gone" << std::endl;
	//box->printLabel();
}