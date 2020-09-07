#include "Person.h"
#include <sstream>


string Person::toString() {
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; age: ";
	ss << age;

	return ss.str();
}

string Animal::toString(){
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; Breed: ";
	ss << breed;
	ss << "; age: ";
	ss << age;

	return ss.str();
}

