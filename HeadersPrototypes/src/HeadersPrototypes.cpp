#include <iostream>


//utils.h is coming from another file
#include "utils.h"

using namespace std;



int main() {

	doSomething();
	doSomethingElse();

	return 0;
}

void doSomething() {
	cout << "hello" << endl;
}

void doSomethingElse() {
	cout << "hello from something else" << endl;
}

