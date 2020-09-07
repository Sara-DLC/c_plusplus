#include <iostream>
using namespace std;

class Animal {
private:
	string name;
public:
	void setName(string name) {this->name = name; };
	void speak() const {cout << "My name is: " << name << endl;};
};


int main() {

	const int VALUE = 7;

	cout << VALUE << endl;

	Animal animal;

	animal.setName("Freddy");
	animal.speak();

	int value2 = 8;

	int *pValue = &value2;
//  const int *pValue = &value2;
//	int * const pValue = &value2;

	cout << *pValue << endl;

	int number = 11;
	pValue = &number;//Error with this; int * const pValue = &value2;
	//*pValue = 12 // Error with this: const int *pValue = &value2;

	cout << *pValue << endl;


	return 0;
}
