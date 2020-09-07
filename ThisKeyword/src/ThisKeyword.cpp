#include <iostream>
#include "Person.h"
using namespace std;

int main() {
	//These are constructors
	Person person1;
	Person person2("Bob", 7);
	Person person3("Tina", 10);

	cout << person2.toString() << " memory location: " << &person2 << endl;
	cout << person3.toString() << " memory location: " << &person3 << endl;

	return 0;
}
