#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>

class Calc{
    public:
	Calc();
	void setNums();
	double add();
	double subtract();
	double multiply();
	double divide();
    private:
	double first;
	double second;
	double getFirst();
	double getSec();
};

#endif

