#include <iostream>
using namespace std;

//create a char string and output it
//output all the chars with a for loop
//output all the chars with a while true loop

int main() {

	char text[] = "hello";

	for (int i = 0; i < sizeof(text); i ++) {
		cout << text[i] << endl;;
	}

	int k = 0;

	while(true) {
		if (text[k] == 0)
			break;

		cout << text[k] << flush;

		k++;
	}

	return 0;
}
