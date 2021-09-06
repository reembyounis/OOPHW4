/* Reem Younis ID. 208593970
	Yosef Abu Ghanem ID. 316532241
*/

#ifndef DEVELOPEREMPLOYEE_H_
#define DEVELOPEREMPLOYEE_H_

#include<iostream>
#include<string>
#include<vector>
#include"Employee.h"

using namespace std;
using std::string; 

class DeveloperEmployee : public Employee { // Developer employee is a derived class
	std::string project;
public:
	DeveloperEmployee(); //default c'tor
	DeveloperEmployee(std::string description, std::string Project = "???");// c'tor
	~DeveloperEmployee();//d'tor
	void setProject(string Project = "???"); // set employee project
	std::string getProject(); // return employee project 

	friend std::ostream& operator<<(std::ostream& cout, const DeveloperEmployee& developer) { // print employee
		cout << "Developer ID = " << developer.getID();
		cout << ", project = " << developer.project;
		cout << endl;
		return cout;
	}

	DeveloperEmployee* clone();// deep copy
};

#endif