#include <iostream>
#include <functional>

#include "Memory.h"
#include "ContinueBreakReturn.h"
#include "Exceptions.h"
#include "BinaryOps.h"
#include "Abstraction.h"
#include "Subprograms.h"
#include "Concurrency.h"
#include "EventHandling.h"
#include "Functional.h"
#include "Scope.h"
#include "References.h"
#include "ParameterPassing.h"
#include "Overloading.h"
#include "TypeCasting.h"
#include "StatementLevel.h"
#include "StackRecursion.h"
#include "Generic.h"
#include "OOP.h"
#include "DiamondOfDeath.h"
#include "ObjectAllocation.h"

using namespace std;

void callFunctional(function<void(int)> funct, int value);
void callFunction(void (*fptr)(int), int value);
void non_member(int value);
void passFunction();

int main() {
	//Keywords continue, break and return example
	cout << endl << "Pass function" << endl;
	passFunction();

	cout << endl << "ContinueBreakReturn" << endl;
	ContinueBreakReturn cbr;
	//cbr.main();

	//Binding and memory allocation example
	cout << endl << "Memory" << endl;
	Memory mem;
	//mem.main();

	//Exceptions
	cout << endl << "Exceptions" << endl;
	Exceptions exc;
	//exc.main();

	//Binary operations
	cout << endl << "Binary Ops" << endl;
	BinaryOps bin;
	//bin.main();

	//Abstraction
	cout << endl << "Abstraction" << endl;
	Abstraction abs;
	//abs.main();

	//Subprograms
	cout << endl << "Subprograms" << endl;
	Subprograms sub;
	//sub.main();

	//Concurrency
	cout << endl << "Concurrency" << endl;
	Concurrency con;
	//con.main();

	//Event handling
	cout << endl << "Event handling" << endl;
	EventHandling evh;
	//evh.main();

	cout << endl << "Functional programming" << endl;
	Functional fnc;
	//fnc.main();

	cout << endl << "Scope" << endl;
	Scope scp;
	//scp.main();

	cout << endl << "References" << endl;
	References ref;
	//ref.main();

	cout << endl << "Parameter passing" << endl;
	ParameterPassing par;
	//par.main();

	cout << endl << "Overloading" << endl;
	Overloading ovr;
	//ovr.main();

	cout << endl << "Typecasting" << endl;
	TypeCasting typ;
	//typ.main();

	cout << endl << "Statement level" << endl;
	StatementLevel stm;
	//stm.main();

	cout << endl << "Stack recursion" << endl;
	StackRecursion stk;
	//stk.main();

	cout << endl << "Generic" << endl;
	Generic gen;
	//gen.main();

	cout << endl << "OOP" << endl;
	OOP oop;
	//oop.main();

	cout << endl << "Diamonth of death" << endl;
	DiamondOfDeath dod;
	//dod.main();

	cout << endl << "Object allocation" << endl;
	ObjectAllocation obj;
	obj.main();
}

void callFunction(void (*fptr)(int), int value) {
	fptr(value);
}

void callFunctional(function<void(int)> funct, int value) {
	funct(value);
}

void non_member(int value) {
	cout << "Value is: " << value << endl;
}

void passFunction() {
	int x = 2;
	callFunction(non_member, x);
	callFunctional(non_member, x);
}