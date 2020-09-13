#include <iostream>

#include "Animals.h"
#include "Cat.h"

using namespace std;

using namespace sdlc;

int main() {

	Cat cat;
	cat.speak();

	sdlc::Cat cat2;
	cat2.speak();

	cat::Cat cat3;
	cat3.speak();

	cout << sdlc::CATNAME << endl;
	cout << cat::CATNAME << endl;

	cout << CATNAME << endl;

	return 0;
}
