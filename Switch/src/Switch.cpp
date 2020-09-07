#include <iostream>
using namespace std;

int main() {

	int value = 5;
//cannot have a variable in your case but can use constant values, try to not use either.
	//won't work with strings
	switch(value) {
	case 4:
		cout << "value is 4" << endl;
		break;
	case 5:
		cout << "value is 5" << endl;
		break;
	case 6:
		cout << "value is 6" << endl;
		break;
	default:
		cout << "unrecognized value" << endl;
	}

	return 0;
}
