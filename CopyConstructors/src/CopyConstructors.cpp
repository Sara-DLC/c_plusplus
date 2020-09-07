#include <iostream>
using namespace std;


class Animal {
private:
	string name;
public:
	Animal(){cout << "Animal created." << endl;};
	Animal(const Animal& other): name(other.name) {cout << "Animal created by copying." <<endl;};
	void setName(string name) {this->name = name;};
	void speak(){cout <<"My name is: "<< name << endl;};
};


int main() {

	Animal animal;

	animal.setName("Freddy");

	//C++ implicitely created the copy constructor
	Animal animal2 = animal;
	animal2.speak();
	animal2.setName("Bob");

	animal.speak();
	animal2.speak();

	Animal animal3(animal);
	animal3.speak();


	return 0;
}
