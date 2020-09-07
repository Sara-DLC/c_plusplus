#include <iostream>
#include <limits> //limits on integer overflow
using namespace std;

int main() {

	int value = 54656;
	cout << value << endl;

	cout << "Max int value: " << INT_MAX << endl;
	cout << "Min int value: " << INT_MIN << endl;

	long int lValue = 234325325353;
	cout << lValue << endl;

	long int sValue = 23434;
	cout << sValue << endl;

	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of short int: " << sizeof(short int) << endl;

	unsigned int uValue = 3443455; //only can have positive values
	cout << uValue << endl;

	signed int uValue2 = -3443455; //can have negative values
	cout << uValue2 << endl;



	return 0;
}
