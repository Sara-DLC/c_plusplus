#include <iostream>

using namespace std;

int main() {

	bool bValue = true;
	cout << "Size of bool: " << sizeof(bool) << endl;
	cout << "True == 1, False == 0" << bValue << endl;

	char cValue = 55;
	cout << "ASCII code of cValue: " << cValue << endl;
	cout << "Size of Char: " << sizeof(char) << endl;

	wchar_t wValue = 56;
	cout << "ASCII code of wValue: " << (char)wValue << endl;
	cout << "Size of WChar_T: " << sizeof(wchar_t) << endl;

	return 0;
}
