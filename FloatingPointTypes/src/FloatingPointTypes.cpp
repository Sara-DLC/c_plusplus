#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	float fvalue = 123.456789;

	cout << "Size of float: "<< sizeof(float) << endl;
	cout << setprecision(20) << fixed << fvalue << endl;

	double dvalue = 123.456789;
	cout << "Size of double: "<< sizeof(double) << endl;
	cout << setprecision(20) << fixed << dvalue << endl;

	long double lvalue = 123.45678987654321;
	cout << "Size of long double: "<< sizeof(long double) << endl;
	cout << setprecision(20) << fixed << lvalue << endl;

	return 0;
}
