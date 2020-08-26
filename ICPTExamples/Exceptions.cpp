#include "Exceptions.h"
#include <iostream>

void Exceptions::main() {
	catchAll();
	std::cout << std::endl;
	caughtException();
	std::cout << std::endl;
	catchSpecific();
	std::cout << std::endl;
	//uncaughtException(); //Enable to proof unhandled exception will show up
}

//... catches every exception thrown, 
void Exceptions::catchAll() {
	std::cout << "Example of function catching every data type: Exceptions::catchAll" << std::endl;
	for (int toThrow = 0;toThrow < 3;toThrow++) {
		try {
			throwException(toThrow);
		}
		catch (...) {
			std::cout << "An exception that hasn't been thought of has been caught" << std::endl;
		}
	}
}

/*Example showing that, as soon as there is an error, the everything in the try block, will no more be excecuted
* Will result in an unhandeled exception error.
*/
void Exceptions::caughtException() {
	std::cout << "Example of function being interupted by exception: Exceptions::caughtException" << std::endl;
	try {
		throwInt();
		throwChar();
		throwBool();
	}
	catch (int x) {
		std::cout << "Caught exception with code " << x << std::endl;
	}
}


void Exceptions::catchSpecific() {
	std::cout << "Example of function catching speciic data types: Exceptions::catchSpecific" << std::endl;
	for (int toThrow = 0;toThrow < 3;toThrow++) {
		try {
			throwException(toThrow);
		}
		catch (int errorCode) {
			std::cout << "An exception with error code " << errorCode << " has been caught" << std::endl;
		}
		catch (char errorChar) {
			std::cout << "An exception with error character '" << errorChar << "' has been caught" << std::endl;
		}
		catch (bool errorFlag) {
			std::cout << "An exception with error flag " << errorFlag << " has been caught" << std::endl;
		}
	}
}

//Showing an thrown integer can't be caught with other type
void Exceptions::uncaughtException() {
	std::cout << "Example of no ... catching or wrong specific type catch, resulting in unhandled exception error popup: Exceptions::uncaughtException" << std::endl;
	try {
		throwInt();
	}
	catch (char* x) {
		std::cout << "Char array has been returned" << std::endl;
	}
}

void Exceptions::throwException(int toThrow) {
	switch (toThrow) {
		case 0: throwInt();
		case 1: throwChar();
		case 2: throwBool();
	}
}

void Exceptions::throwInt() {
	std::cout << "I'm going to throw an integer" << std::endl;
	int x = 2;
	throw x;
	std::cout << "Int has been thrown";
}

void Exceptions::throwChar() {
	std::cout << "I'm going to throw a character" << std::endl;
	char x = 'a';
	throw x;
	std::cout << "An 'a' has been thrown";
}

void Exceptions::throwBool() {
	std::cout << "I'm going to thrown a bool" << std::endl;
	bool x = 1;
	throw x;
	std::cout << "A true value has been thrown" << std::endl;
}