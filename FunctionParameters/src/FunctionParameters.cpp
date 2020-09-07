#include <iostream>
using namespace std;

void showMenu() {
	cout << "1. Search" << endl;
	cout << "2. View Record" << endl;
	cout << "3. Quit" << endl;
}

//int will return an integer from input
int inputSelection() {

	cout << "Enter Selection: " << flush;

	int input;
	cin >> input;

	return input;

}

void processSelection(int userInput) {
	switch (userInput) {
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

//Make your main pretty straightforward
int main() {

	showMenu();
	//declare variable and assign the processSelection function and pass it to the switch
	//statement
	int selection = inputSelection();
	processSelection(selection);

	return 0;
}
