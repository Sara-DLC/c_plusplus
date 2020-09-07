#include <iostream>
#include "Person.h"

using namespace std;

int main() {

	Person person;
	Insect insect;

	person.setName("Georgina");
	insect.setInsectName("Yeti");

	cout << "Name of Insect with get method: " << insect.getInsectName() << endl;

	cout << "Name of person with get method: " << person.getName() << endl;

	return 0;
}
