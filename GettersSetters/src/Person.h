#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>

using namespace std;

class Person {
private:
	string name;

public:
	Person();
	void setName(string newName);
	string getName();
};

class Animal {
private:
	string name;

public:
	Animal();

};

class Insect {
private:
	string name;

public:
	Insect();
	void setInsectName(string insectNewInsectName);
	string getInsectName();
};

#endif /* PERSON_H_ */
