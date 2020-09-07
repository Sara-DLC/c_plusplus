#include <iostream>
using namespace std;

int main() {

	string animals[][3] = { { "fox", "dog", "cat" }, { "mouse", "parrot",
			"squirrel" }, };
//divide the size of the animals array by animals at 0 index
	for (unsigned int i = 0; i < sizeof(animals) / sizeof(animals[0]); i++) {
		//divide the size of animals at 0 index by the size of the string
		for (unsigned int j = 0; j < sizeof(animals[0]) / sizeof(string); j++) {
			cout << "\t" << animals[i][j] << flush;
		}
		cout << endl;
	}

	return 0;
}
