/* Reem Younis ID. 208593970
	Yosef Abu Ghanem ID. 316532241
*/

#include<iostream>
#include<string>
#include<vector>
#include"PrintableTester.h"

PrintableTester::PrintableTester() { } //default c'tor

PrintableTester::~PrintableTester() { } // d'tor

TesterEmployee* PrintableTester::clone() { // deep copy
	PrintableTester* tmp = new PrintableTester;
	ID = ID - 2;
	tmp->setID(getID());
	tmp->setDescription(getDescription());
	tmp->setLevel(getLevel());
	return tmp;
}