#include "functions.h"

/*Calc::Calc() {
    first = 0;
    second = 0;
}
*/
void Calculator::setNums() {

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

double  Calculator::add() {
    return getFirst() + getSec();
}

double  Calculator::subtract() {
    return getFirst() - getSec();
}

double  Calculator::multiply() {
    return getFirst() * getSec();
}

double  Calculator::divide() {
    return getFirst() / getSec();
}

double  Calculator::getFirst() {
    return first;
}

double  Calculator::add() {
    return second;
}

