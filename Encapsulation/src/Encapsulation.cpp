#include <iostream>
using namespace std;

class Frog {
	//private instances
private:
	string name;
	//private methods
private:
	string getName() { return name;}
	//public methods
public:
	Frog(string name): name(name){}
	void info(){cout << "My name is: " << getName() << endl;}

};

int main() {


	Frog frog("Freddy");

//	cout << frog.getName() << endl;

	frog.info();

	return 0;
}
