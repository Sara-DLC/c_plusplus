#include <iostream>
using namespace std;

int main() {

	cout << "\nArray of integers" << endl;
	cout << "=================" << endl;
	int values[3];

	values[0] = 88;
	values[1] = 56;
	values[2] = 23;

	cout << values[0] << endl;
	cout << values[1] << endl;
	cout << values[2] << endl;

	cout << "\nArray of doubles" << endl;
	cout << "================" << endl;
	double numbers[4] = { 4.5, 3.3, 5.7, 6.2 };

	for (int i = 0; i < 4; i++) {
		cout << "Element at index " << i << " is " << numbers[i] << endl;
	}

	cout << "\nInitializing with 0 values" << endl;
	cout << "==========================" << endl;

	int numbersArray[8] = { };

	for (int i = 0; i < 8; i++) {
		cout << "Element at index " << i << " is " << numbersArray[i] << endl;
	}

	/*
	 array of strings-if array is initialized with values c++ can
	 automatically size the array and know how many items are in that array.
	 C++ will not stop you from accessing elements that doesn't exist ex. try 0 in an array
	 and put out the value...it's a garbage value.
	 */

	cout << "\nInitializing with strings" << endl;
	cout << "=========================" << endl;

	string texts[] = { "apple", "banana", "orange" };
	for (int i = 0; i < 3; i++) {
		cout << "Element at index " << i << " is " << texts[i] << endl;
	}

	return 0;
}
