#include<iostream>
#include<string>
#include<vector>
#include"PrintableDeveloper.h"

PrintableDeveloper::PrintableDeveloper() { } // default c'tor

PrintableDeveloper::~PrintableDeveloper() { } // d'tor

PrintableDeveloper* PrintableDeveloper::clone() { // deep copy
	PrintableDeveloper* tmp = new PrintableDeveloper();
	ID = ID - 1;
	tmp->setID(getID());
	tmp->setDescription(getDescription());
	tmp->setProject(getProject());
	return tmp;
}
