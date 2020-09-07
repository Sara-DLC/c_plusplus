#include <iostream>

using namespace std;

int main() {

	cout << "1.Add new record " << endl;
	cout << "2.Delete record " << endl;
	cout << "3.View record " << endl;
	cout << "4.Search record " << endl;
	cout << "5.Quit " << endl;

	cout << "Enter your selection: " << flush;

	int value;
	cin >> value;

	if(value == 1) {
		cout << "Adding new record..." << endl;
	} else if (value == 2) {
		cout << "Deleting record..." << endl;
	} else if (value == 3) {
		cout << "Viewing record..." << endl;
	} else if (value == 4) {
		cout << "Searching record..." << endl;
	} else if (value == 5) {
		cout << "Quitting..." << endl;
	}
	else {
		cout << "Please try options 1-5 only" << endl;
	}

	return 0;
}
