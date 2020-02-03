#include <iostream>

class Calc{
    public:
	Calc();
	double add();
	double subtract();
	double multiply();
	double divide();
    private:
	double first;
	double sec;
	double getFirst();
	double getSec();
};
