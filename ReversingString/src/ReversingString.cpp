#include <iostream>
using namespace std;

int main() {

	char text[] = "hello";

	int nChars = sizeof(text)-1;

	char *pStart = text;
	char *pEnd = text + nChars - 1;

	while (pStart < pEnd){

		char save = *pStart;

		cout << "Start of loop saved character: "<< *pStart << " " << endl;

		cout << "=========================" << endl;

		*pStart = *pEnd;

		cout << "pStart after switch: " << *pStart << " " << endl;
		cout << "pEnd after switch: " << *pEnd  << " " <<  endl;

		cout << "=========================" << endl;

		*pEnd = save;

		cout << "pEnd after save: " << *pEnd << " " << endl;


		pStart++;
		pEnd--;

	}

	cout << "=========================" << endl;

	cout << "Finished reversed string: " << text << endl;

	return 0;
}
