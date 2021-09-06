/* Reem Younis ID. 208593970
	Yosef Abu Ghanem ID. 316532241
*/

#ifndef TESTEREMPLOYEE_H_
#define TESTEREMPLOYEE_H_

#include<iostream>
#include<string>
#include<vector>
#include"Employee.h"
#include"DeveloperEmployee.h"

using namespace std;
using std::string;

class TesterEmployee : public Employee { // Tester Employee is a derived class
	string level;
public:
	TesterEmployee(); // default c'tor
	TesterEmployee(string description, string Level = "???"); // c'tor
	~TesterEmployee(); // d'tor
	string getLevel(); // return employee level
	void setLevel(string Level = "???"); // set employee level

	friend std::ostream& operator<<(std::ostream& cout, const TesterEmployee& tester) { // print employee
		cout << "Tester ID = " << tester.getID();
		cout << ", level = " << tester.level;
		cout << endl;
		return cout;
	}

	TesterEmployee* clone(); // deep copy
};
#endif
