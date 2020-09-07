#include <iostream>

using namespace std;

int main() {

	int values[] = {4,5,6,7};

	cout << sizeof(values) << endl;
	cout << sizeof(int) << endl;

	for(int i = 0; i < 4; i++) {
		cout << values[i] << endl;
	}

	return 0;
}
