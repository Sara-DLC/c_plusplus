#include <iostream>
using namespace std;

//function example...uses void because it doesn't return anything
void showMenu() {
	cout << "1. Search" << endl;
	cout << "2. View Record" << endl;
	cout << "3. Quit" << endl;
}

//function example...void because it doesn't return anything
void processSelection() {

	do {
		cout << "Enter Selection: " << flush;

		int input;
		cin >> input;

		if (input) {
			switch (input) {
			case 1:
				cout << "Searching..." << endl;
				break;
			case 2:
				cout << "Viewing..." << endl;
				break;
			case 3:
				cout << "Quitting..." << endl;
				break;
			default:
				cout << "Option not on menu" << endl;

			}

		}

	} while (true);

}

//Make your main pretty straightforward
int main() {

	showMenu();
	processSelection();

	return 0;
}
