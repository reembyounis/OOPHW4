/* Reem Younis ID. 208593970
	Yosef Abu Ghanem ID. 316532241
*/

#ifndef ILLEGALARGUMENTS_H_
#define ILLEGALARGUMENTS_H_

#include<iostream>
#include<string>

class IllegalArguments { // class for throwing exceptions when error is compiled
	std::string exception;
public:
	IllegalArguments(); // default c'tor
	IllegalArguments(std::string exception); // c'tor
	~IllegalArguments(); // d'tor
};



#endif