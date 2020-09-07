#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>

using namespace std;

class Person {
private:
	string name;
	int age;
public:
	//Default constructor
	Person():name(""), age(0){};
	//Parameterized constructor
	Person(string name, int age): name(name), age(age) {};
	string toString();
};

class Animal {
private:
	string name;
	string breed;
	int age;

public:
	Animal():name(""), age(0){};
	Animal(string name, string breed, int age): name(name), breed(breed), age(age) {};
	string toString();
};

#endif /* PERSON_H_ */
