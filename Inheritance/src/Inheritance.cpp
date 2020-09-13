#include <iostream>
using namespace std;

class Animal {
public:
	void speak(string speaking){cout << speaking << endl;};
};

class Cat: public Animal  {
public:
	void jump(string jump){cout << jump << endl;};
};

class Tiger: public Cat {
public:
	void attack(){cout << "attacking" << endl;};
};


int main() {

	Animal animal1;
	animal1.speak("Grr");

	Cat cat;
	cat.speak("Meow");
	cat.jump("cat pouncing");

	Tiger tiger;
	tiger.speak("Roar");
	tiger.jump("tiger jumping");
	tiger.attack();


	return 0;
}
