/* Reem Younis ID. 208593970
	Yosef Abu Ghanem ID. 316532241
*/

#ifndef COMPANY_H_
#define COMPANY_H_

#include<iostream>
#include<string>
#include<vector>
#include"Employee.h"
#include"DeveloperEmployee.h"
#include"TesterEmployee.h"
#include"PrintableDeveloper.h"
#include"PrintableTester.h"

using namespace std;
using std::string;

class Company : public DeveloperEmployee, public TesterEmployee { // company is a derived class
	std::vector<Employee*> list; // vector to save new employees in comany
public:
	Company(); // default c'tor
	~Company(); // d'tor
	bool contains(int id); // function checks if employee with given id exists in company, returns true or false
	Company* operator+=(Employee* employee); // adding employee to company
	Employee* operator[](int id); // function returns an employee with given employee
	Company* operator-=(int id); // removing an employee with given id 

	friend std::ostream& operator<<(std::ostream& cout, const Company& company) { // print company
		if (company.list.size() == 0) {
			cout << "Company is empty" << endl;
		}
		else {
			cout << "Company employees:" << endl;
			for (std::size_t i = 0; i < company.list.size(); i++) { // loop for printing
				if (typeid(*(company.list[i])) == typeid(DeveloperEmployee)) { // check if employee type is developer employee
					cout << " Developer ID = " << company.list[i]->getID();
					cout << ", project = " << dynamic_cast<DeveloperEmployee*>(company.list[i])->getProject();
					cout << endl;
				}
				if (typeid(*(company.list[i])) == typeid(TesterEmployee)) { // check if employee type is tester employee
					cout << " Tester ID = " << company.list[i]->getID();
					cout << ", level = " << dynamic_cast<TesterEmployee*>(company.list[i])->getLevel();
					cout << endl;
				}
				if (typeid(*(company.list[i])) == typeid(PrintableDeveloper)) { // check if employee type is printable developer
					cout << " Developer ID = " << company.list[i]->getID();
					cout << ", project = " << (dynamic_cast<PrintableDeveloper*>(company.list[i]))->getProject();
					cout << endl;
				}

				if (typeid(*(company.list[i])) == typeid(PrintableTester)) { // check if employee type is printable tester
					cout << " Tester ID = " << company.list[i]->getID();
					cout << ", level = " << (dynamic_cast<PrintableTester*>(company.list[i]))->getLevel();
					cout << endl;
				}
			}

		}
		return cout;

	}
};

#endif
