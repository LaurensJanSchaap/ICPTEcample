#include <iostream>
#include "Memory.h"
using namespace std;

void Memory::main() {
	int* non_init_ints = (int *)malloc(9*sizeof(int));
	int* init_ints = (int *)calloc(9, sizeof(int));

	cout << non_init_ints[8] << endl;
	cout << init_ints[0] << endl;

	non_init_ints = (int *)realloc(non_init_ints, 5 * sizeof(int));
	
	cout << non_init_ints[8] << endl;

	free(non_init_ints);

	cout << non_init_ints[0] << endl;
}