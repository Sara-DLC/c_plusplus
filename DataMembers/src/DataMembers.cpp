#include <iostream>
#include "Cat.h"

using namespace std;

int main() {

	Cat cat;
	cat.makeHappy();
	cat.speak();

	Cat cat2;
	cat.makeSad();
	cat2.speak();


	return 0;
}
