#include <iostream>
using namespace std;

//.h header file
class Test {
private:
	static int count;
	int id;
	//initialization of const must be done here!
public:
	static int const MAX = 99;
public:
	Test() {
		id = ++count; //pre increment will start count at 1 since it was started at 0 on line
		//26 below
//		id = count++; post increment will start count at 0
	}
	int getId() {
		return id;
	}
	static void showInfo() {
		cout << count << endl;
	}
};

//.cpp file
int Test::count = 0;

int main() {

	cout << Test::MAX << endl;

	Test test1;
	cout << "Object1 ID: "<< test1.getId() << endl;
	Test test2;
	cout << "Object2 ID: "<< test2.getId() << endl;

	Test::showInfo();
//	cout << Test::count << endl; //this runs if static int is public

	return 0;
}
