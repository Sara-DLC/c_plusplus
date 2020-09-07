#include "Person.h"

Person::Person() {
	name = "George";

}

void Person::setName(string newName) {
	name = newName;
}


string Person::getName() {
	return name;
}


Insect::Insect() {
	name = "Jeff";
}

string Insect::getInsectName(){
	return name;
}

void Insect::setInsectName(string insectNewInsectName){
	name = insectNewInsectName;
}
