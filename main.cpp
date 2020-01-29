#include <iostream>
#include "something.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout<<"Hi, please enter two numbers: ";
    gatherPrint();

    int x,y;

    cin >> x >> y;
    cout << x + y << endl;

    return 0;
}
