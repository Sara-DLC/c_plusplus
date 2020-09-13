#include <iostream>
using namespace std;


class Animal{
private:
	string name;
public:
	Animal(){
		cout << "Animal Created." << endl;
	}
	Animal(const Animal& other):name(other.name){
		cout << "Animal created by copying." << endl;
	}
	~Animal() {
		cout << "Destructor called." << endl;
	}
	void setName(string name){
		this->name = name;
	}
	void speak() const {
		cout << "My name is: " << name << endl;
	}
};

class Person {
private:
	string name;

public:
	Person(){
		cout << "Person created." << endl;
	}
	Person(const Person& other):name(other.name){
		cout << "Person created by copying." << endl;
	}
	~Person(){
		cout << "Person destroyed." << endl;
	}
	void setPersonName(string name){
		this->name = name;
	}
	void speak() const {
		cout << "My name is: " << name << endl;
	}
};

Person *createPerson(){
	Person *pPerson = new Person();
	pPerson->setPersonName("Barnie");
	return pPerson;
}

Animal *createAnimal(){
	Animal *pAnimal = new Animal();
	pAnimal->setName("Bertie");
	return pAnimal;
}




int main() {

	Animal *pFrog = createAnimal();

	pFrog->speak();

	Person *pHuman = createPerson();

	pHuman->speak();


	delete pFrog;
	delete pHuman;


	return 0;
}
