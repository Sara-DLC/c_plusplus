#include <iostream>

using namespace std;

int main() {

	/*
	 * break example....
	 for (int i = 0; i < 5; i++) {

	 cout << "i is: " << i << endl;

	 if (i == 3) {
	 break;
	 }

	 cout << "Looping..." << endl;
	 }
	 */

	/*continue example.....
	 for (int i = 0; i < 5; i++) {

	 cout << "i is: " << i << endl;

	 if (i == 3) {
	 continue;
	 }

	 cout << "Looping..." << endl;
	 }
	 */

	const string password = "hello";

	string input;

	do {
		cout << "Enter your password: " << flush;
		cin >> input;

		if (input == password) {
			break;
		} else {

			cout << "Access Denied." << endl;
		}

	} while (true);

	cout << "Password Accepted" << endl;

	return 0;
}
