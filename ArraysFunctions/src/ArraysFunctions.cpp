#include <iostream>
using namespace std;

//could declare variables here
//string animals[] = {"cat", "dog", "goat"};

void show1(const int nElements, string textName[]) {
	for (int i = 0; i < 3; i++){
		cout << textName[i] << endl;
	}
}

//same as above but passing a pointer to the array

void show2(const int nElements, string *textName) {
	for (int i = 0; i < nElements; i++){
		cout << textName[i] << endl;
	}
}

//passing the correct number of elements in the array in the loop, no need to specify later
void show3(string (&text)[3]) {
	for (int i = 0; i < sizeof(text)/sizeof(string); i++){
		cout << text[i] << endl;
	}
}

//returning an array from a function what not to do:

//string *pGetArray() {
//	Dont return pointers to a local variable. example below:
//	string text[] = {"cat", "dog", "goat"};
//	it will return text but will give a warning as we are  returning a pointer to the array
//	the pointer will point to something that no longer exists after the function returns
//	return text;
//}

//If you need to return an array from a function you can:


//this is ok because we are using new and explicitly allocation memory and it will not be reallocated
//until delete was called on it
char *getMemory(){
	char *pMem = new char[100];

	return pMem;
}

void freeMemory(char *pMem){
	delete [] pMem;
}


int main() {

	string text[] = {"apple", "orange", "banana"};

//	show1(3, text);
//	show2(3, text);
//	show3(text);

	char *pMemory = getMemory();
	freeMemory(pMemory);

	return 0;
}
