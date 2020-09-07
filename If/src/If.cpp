#include <iostream>

using namespace std;

int main() {

	string password = "hello";

	cout << "Enter your password: " << flush;

	string input;
	cin >> input;

	if(input == password){
		cout << "Welcome" << endl;
	}

	if (input != password) {
		cout << "Access Denied." << endl;
	}
//Use the below code to check your password is being read:
//	cout << "'" << input << "'" << endl;

	return 0;
}
