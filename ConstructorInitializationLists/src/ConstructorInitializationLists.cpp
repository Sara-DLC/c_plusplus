#include <iostream>
#include "Person.h"

using namespace std;

int main() {

	Person person0;
	Person person1("Zoltar", 7);
	Person person2("Tina", 9);

	cout << person0.toString() << endl;
	cout << person1.toString() << endl;
	cout << person2.toString() << endl;

	Animal animal0;
	Animal animal1("Bella", "Chow", 5);
	Animal animal2("Snowy", "Labradooble", 3);


	cout << animal0.toString() << endl;
	cout << animal1.toString() << endl;
	cout << animal2.toString() << endl;

	return 0;
}
