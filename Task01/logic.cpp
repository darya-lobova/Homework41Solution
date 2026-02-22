#include "logic.h"

int find_even_numbers(int vector[SIZE], int even_number, int odd_number) {

	even_number = 0;
	for (int index = 0; index < SIZE; index++) {
		even_number += vector[index] % 2 == 0 ? 1 : 0;
	}
	return even_number;
}

void print(string s) {
	cout << s << endl;
}