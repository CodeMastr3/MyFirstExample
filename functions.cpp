#include "functions.h"

Calc::Calc() {
    first = 0;
    second = 0;
}

void Calc::setNums() {

    cout << "Hi, please enter two numbers: ";
    cin >> first >> second;

    char choice
    cout << "What would you like to do with these numbers? (A)dd, (S)ubtract, (M)ultiply, or (D)ivide: ";
    cin >> choice;

    choice = choice.toupper();

    switch(choice) {
	case 'A':
	    cout << add();
	    break;
	case 'S':
	    cout << subtract();
	    break;
	case 'M':
	    cout << multiply();
	    break;
	case 'D':
	    cout << divide();
	    break;
	default:
	    cout << "That wasn't a proper choice\n";
    }
}

double  Calc::add() {
    return getFirst() + getSec();
}

double  Calc::subtract() {
    return getFirst() - getSec();
}

double  Calc::multiply() {
    return getFirst() * getSec();
}

double  Calc::divide() {
    return getFirst() / getSec();
}

double  Calc::getFirst() {
    return first;
}

double  Calc::add() {
    return second;
}

