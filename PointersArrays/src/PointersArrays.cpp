#include <iostream>
using namespace std;

//loop through array using a pointer with array elements reference syntax
//then loop thorough an array incrementing a pointer
//loop through the array and stop by comparing two pointers

int main() {

	string texts[] = { "one", "two", "three" };

	string *pTexts = texts;

	int textsArr = sizeof(texts) / sizeof(string);

	for (int i = 0; i < textsArr; i++) {
		cout << pTexts[i] << " " << flush;
	}

	cout << endl;

	for (int i = 0; i < textsArr; i++, pTexts++) {
		cout << *pTexts << " " << flush;
	}

	cout << endl;

	string *pElements = &texts[0];
	string *pEnd = &texts[2];

	while(true) {
		cout << *pElements << " " << endl;

		if(pElements == pEnd){
			break;
		}

		pElements++;
	}

	return 0;
}
