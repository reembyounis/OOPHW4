#ifndef PRINTABLEDEVELOPER_H_
#define PRINTABLEDEVELOPER_H_

#include<iostream>
#include<string>
#include<vector>
#include"DeveloperEmployee.h"
#include"Employee.h"
#include"DeveloperEmployee.h"
#include"Printable.h"

using namespace std;
using std::string;

class PrintableDeveloper : public Printable<DeveloperEmployee>{ // printable developer is a derived class
public:
	PrintableDeveloper(); // default c'tor
	~PrintableDeveloper(); // d'tor
	PrintableDeveloper* clone(); // deep copy
};
#endif
