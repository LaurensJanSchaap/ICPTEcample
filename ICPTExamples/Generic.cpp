#include "Generic.h"

template <class T>
SomeObject<T>::SomeObject(T value) : value(value) {}

template <class T>
void SomeObject<T>::printValue() {
	std::cout << value << " is a " << typeid(value).name() << std::endl;
}

template <class T>
T SomeObject<T>::getValue() {
	return this->value;
}

void Generic::main() {
	SomeObject<int> g1(5);
	char value = 'A';
	SomeObject<char> g2(value);

	g1.printValue();
	g2.printValue();

	//No casting errors
	
	int g1Value = g1.getValue();
	char g2Value = g2.getValue();
}