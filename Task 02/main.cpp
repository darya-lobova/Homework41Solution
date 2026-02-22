#include "logic.h"


int main() {
	int vector[SIZE];

	cout << "Input array elements: ";
	for (int index = 0; index < SIZE; index++) {
		cin >> vector[index];
	}

	bool result = are_all_the_same(vector);
	string msg = result ? "Yes, all numbers are the same."
		: "No, these numbers are not the same.";

	print(msg);

	return 0;
}