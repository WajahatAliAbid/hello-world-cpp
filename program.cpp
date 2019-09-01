#include <iostream>
#include "functions.h"
using namespace std;

int main()
{
    cout << "Hello World" << endl;
    int number;
    number = 5;
    number = add(number, 5);

    cout << number << endl;

    return 0;
}