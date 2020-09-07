#include <iostream>
using namespace std;

/*
 * +
 * -
 * *
 * /
 * +=
 * -=
 * /=
 * *=
 * %
 * %=
 * precendence
 */

//Take a large number of seconds and convert it to hours, minutes, seconds
//Write a for loop that iterates 10,000 times; output a dot(on the same line) every
//100 iterations(use mod%)

int main() {

	double value1 = (double)7/2;
	cout << value1 << endl;

	//throws away the remainder in C++, needs to be a casted to a double is we want true
	//division. It doesn't round up or down, it just throws away the decimal point.
	int value2 = (int)7.3;
	cout << value2 << endl;

	int value3 = 8;
	value3 += 1; //value3 = value3 + 1 or value3++;
	cout << value3 << endl;

	int value4 = 10;
	value4 /= 5; //same as value4 = value4/5; so value4 divided by 5;
	cout <<value4 << endl;

	int value5 = 13%5;
	cout << value5 << endl;

	double equation = 5.3/4+2*6; //follows PEMDAS same as (5.3/4) + (2*6);
	cout << equation << endl;




	return 0;
}
