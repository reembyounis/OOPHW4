/* Reem Younis ID. 208593970
	Yosef Abu Ghanem ID. 316532241
*/

#include<iostream>
#include<string>
#include"Employee.h"

int Employee::ID = 1; // element for knowing which id we have reached

Employee::Employee() { //default c'tor
	description = "???";
	employee_id = ID;
}

Employee::~Employee() { } // d'tor

const int Employee:: getID() const { // return employee id
	return employee_id;
}

void Employee::setID(int id) { // setting employee id
	employee_id = id;
}

const string Employee::getDescription() const { // return employee description
	return description;
}

void Employee::setDescription(string Description) { // setting employee description
	description = Description;
}

Employee& Employee::operator=(const Employee& employee) { // copy c'tor
	if (this != &employee) {
		description = employee.description;
	}
	return *this;
}