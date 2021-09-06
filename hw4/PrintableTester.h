/* Reem Younis ID. 208593970
	Yosef Abu Ghanem ID. 316532241
*/

#ifndef PRINTABLETESTER_H_
#define PRINTABLETESTER_H_

#include<iostream>
#include<string>
#include<vector>
#include"TesterEmployee.h"
#include"Employee.h"
#include"Printable.h"

using namespace std;
using std::string;

class PrintableTester : public Printable<TesterEmployee> { // printable tester is a derived class
public:
	PrintableTester(); //default c'tor
	~PrintableTester(); // d'tor
	TesterEmployee* clone(); // deep copy
}; 
#endif
