/* Reem Younis ID. 208593970
	Yosef Abu Ghanem ID. 316532241
*/

#include<iostream>
#include<string>
#include"DeveloperEmployee.h"

DeveloperEmployee::DeveloperEmployee():Employee() { // default c'tor
	project = "???";
	ID++;
}

DeveloperEmployee::DeveloperEmployee(std::string description, std::string Project):Employee(){ //c'tor
	setDescription(description);
	setID(getID());
	project = Project;
	ID++;
}

DeveloperEmployee::~DeveloperEmployee(){ } //d'tor

void DeveloperEmployee::setProject(string Project) { // set employee project
	project = Project;
}

std::string DeveloperEmployee::getProject(){ // get employee project
	return project;
}

DeveloperEmployee* DeveloperEmployee::clone() { // deep copy
	DeveloperEmployee* tmp = new DeveloperEmployee(getDescription(), getProject());
	ID--;
	tmp->setID(getID());
	return tmp;
}