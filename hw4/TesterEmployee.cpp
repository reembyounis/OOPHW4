/* Reem Younis ID. 208593970
	Yosef Abu Ghanem ID. 316532241
*/

#include<iostream>
#include<string>
#include"TesterEmployee.h"


TesterEmployee::TesterEmployee() : Employee() { // default c'tor
	level = "???";
	ID++;
}

TesterEmployee::TesterEmployee(string description, string Level) : Employee() { // c'tor
	setDescription(description);
	level = Level;
	ID++;
}

TesterEmployee::~TesterEmployee(){ } // d'tor

std::string TesterEmployee::getLevel() { // return employee level
	return level;
}

void TesterEmployee::setLevel(string Level) { // set employee level
	level = Level;
}

TesterEmployee* TesterEmployee::clone() { // deep copy
	TesterEmployee* tmp = new TesterEmployee(getDescription(), getLevel());
	ID--;
	tmp->setID(getID());
	return tmp;
}