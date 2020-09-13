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

int main() {

	Animal *pAnimal = new Animal[26];
	char c = 'a';
	c++;
	string name(26, 'c');

	cout << name << endl;


		for (int i=0; i < sizeof(*pAnimal)/sizeof(string); i++){
			 cout << "test" << endl;
		}




//	pAnimal[5].setName("George");
//	pAnimal[5].speak();

	delete [] pAnimal;

//	char *pMem = new char[16];
//
//	delete [] pMem;

	return 0;
}
