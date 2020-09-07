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

	if (value < 3){
		cout << "Insufficient privileges to use this menu option" << endl;
	} else {
		cout << "Welcome" << endl;
	}

	return 0;
}
