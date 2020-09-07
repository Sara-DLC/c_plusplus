#ifndef PERSON_H_
#define PERSON_H_

#include <istream>
using namespace std;

class Person {
private:
	string name;
	int age;


public:
	Person();
	Person(string newName){ name = newName; age = 0; };
	//One way of doing this straight into  header
	//Other way is in Person.cpp
//	Person(string newName, int newAge){ name = newName; age = newAge; };
	Person(string newName, int newAge);
	string toString();
};

#endif /* PERSON_H_ */
