/* Reem Younis ID. 208593970
	Yosef Abu Ghanem ID. 316532241
*/

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include<iostream>
#include<string>
#include<vector>

using namespace std;
using std::string;

class Employee { // base class
	string description;
	int employee_id;

public: 
	static int ID; // index for counting ID's and knowing what number we have reached

	Employee(); //default c'tor
	virtual ~Employee(); // d'tor

	virtual Employee* clone() {// deep copy
		return new Employee();
	}

	Employee& operator=(const Employee& employee); // copy c'tor

	friend std::ostream& operator<<(std::ostream& cout, const Employee& employee) { // print employee
		cout << "Developer ID = " << employee.employee_id;
		cout << ", desciption: " << employee.description;
		cout << endl;
		return cout;
	}

	const int getID() const; // return employee id
	void setID(int id); // set employee id
	const string getDescription() const; // return employee description
	void setDescription(string Description); // set employee description
};
#endif
