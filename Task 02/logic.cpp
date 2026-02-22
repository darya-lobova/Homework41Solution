#include "logic.h"

bool are_all_the_same(int vector[SIZE]) {

	for (int index = 1; index < SIZE; index++) {
		if (vector[index] != vector[0]) {
			return false;
		}
	}
	return true;
}

void print(string s) {
	cout << s << endl;
}