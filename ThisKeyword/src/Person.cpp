#include "Person.h"
#include <sstream>

Person::Person() {
	name = "";
	age = 0;

}

//Implementing the constructor
Person::Person(string name, int age){
	this->name = name;
	this->age = age;

	cout << this << endl;
}


string Person::toString() {
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; Age: ";
	ss << age;

	return ss.str();
}



