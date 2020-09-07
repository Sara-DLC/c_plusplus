#include <iostream>
#include "Cat.h"

using namespace std;

int main() {
	cout << "Starting Program...." << endl;

	{
		Cat cat;
		cat.speak();
	}

	{
		Dog dog;
		dog.speak();
	}

	cout << "Ending Program...." << endl;
	return 0;
}
