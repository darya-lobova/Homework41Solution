#include "logic.h"


int main() {
	int vector[SIZE];
	int even_number = 0;
	int odd_number = 0;

	cout << "Input array elements: ";
	for (int index = 0; index < SIZE; index++) {
		cin >> vector[index];
	}
	even_number = find_even_numbers(vector, even_number, odd_number);
	odd_number = SIZE - even_number;

	print("There are " + to_string(even_number) + " even numbers in your array.");
	print("There are " + to_string(odd_number) + " odd numbers in your array.");

	return 0;
}