#include<iostream>
#include<string>
#include"Company.h"
#include"IllegalArguments.h"


Company::Company() { // default c'tor
	ID = ID - 2;
}

Company::~Company(){ } // d'tor

bool Company::contains(int id) { // function checks if employee with given id exists in company, returns true or false
	if (id<0 || id>ID) {
		throw IllegalArguments();
	}
	else {
		for (std::size_t i = 0; i < list.size(); i++) {
			if (list[i]->getID() == id) {
				return true;
			}
		}
		return false;
	}
}

Company* Company::operator+=(Employee* employee) { // adding employee to company
	if (employee == NULL) {

		throw IllegalArguments();

	}
	else {
		if (!contains(employee->getID())) {
			Employee* temp = employee->clone();
			list.push_back(temp);
		}
		return this;
	}
}

Employee* Company::operator[](int id) { // function returns an employee with given employee
	if (id < 0) {
		throw IllegalArguments();
	}
	else {
		for (std::size_t i = 0; i < list.size(); i++) {
			if (list[i]->getID() == id) {
				return list[i]->clone();
			}
		}
	return NULL;
	}
}

Company* Company::operator-=(int id) { // removing an employee with given id
	if (id<0 || id>ID) {
		throw IllegalArguments();
	}
	else {
		std::vector<Employee*>::iterator it = list.begin();
		for (std::size_t i = 0; i < list.size(); i++) {
			if (list[i]->getID() == id) {
				it = list.begin() + i;
				list.erase(it);
			}
		}
		return this;
	}
}
