#include <iostream>
#include "ContinueBreakReturn.h"

using namespace std;

void ContinueBreakReturn::main() {
	int lastContuneLoopIndex = continueLoop();
	int brokeOn = breakLoopAt(34);

	cout << "Last continue loop index: " << lastContuneLoopIndex << endl;
	cout << "Broke loop on: " << brokeOn << " instead ending on 200" << endl;

	//Nothing
	cout << endl << "MultipleReturns(5)" << endl;
	multipleReturns(5);
	cout << endl << "MultipleReturns(3)" << endl;
	multipleReturns(3);
	cout << endl << "MultipleReturns(-3)" << endl;
	multipleReturns(-3);
}

int ContinueBreakReturn::continueLoop() {
	int i = 0;
	for (i = 0;i < 200;i++) {
		cout << "Just printing i: " << i << endl;
		if (i < 97) {
			continue;
		}
		cout << "I'm " << i <<", above 96" << endl;
	}
	return i;
}

int ContinueBreakReturn::breakLoopAt(int breakpoint) {
	int i;
	for (i = 0;i < 200;i++) {
		cout << "Just printing i: " << i << endl;
		if (i == breakpoint)
			break;
	}
	return i;
}

void ContinueBreakReturn::multipleReturns(int number) {
	if (number >= 5) {
		return;
	}
	cout << "Number less than 5" << endl;
	if (number == 4) {
		return;
	}
	cout << "Number less than 4" << endl;
	if (number == 3) {
		return;
	}
	cout << "Number less than 3" << endl;
}