#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat() {
	cout << "Cat created. " << endl;

	happy = true;
}

Cat::~Cat() {
	cout << "Cat destroyed. " << endl;
}

void Cat::speak() {
	if (happy) {
		cout << "Meow...." << endl;
	} else {
		cout << "Sssss...." << endl;
	}
}

Dog::Dog() {
	cout << "Dog created. " << endl;

	happy = true;
}

Dog::~Dog() {
	cout << "Dog destroyed. " << endl;
}

void Dog::speak() {
	if (happy) {
		cout << "Woof...." << endl;
	} else {
		cout << "Grrrr...." << endl;
	}
}
