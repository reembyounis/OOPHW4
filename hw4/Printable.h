/* Reem Younis ID. 208593970
	Yosef Abu Ghanem ID. 316532241
*/

#ifndef PRINTABLE_H_
#define PRINTABLE_H_

#include<iostream>
#include<string>
#include<vector>
#include"Employee.h"

template<class Base> // template for printable tester and printable developer
class Printable : public Base{
public:
	Printable(){ } // c'tor
	~Printable(){ } // d'tor
	void printDescription() { // print employee description
		cout << Base::getDescription() << endl;
	}
};

#endif