#include <iostream>
#include "functions.h"
using namespace std;
class Book
{

public:
    string Name;
    string Author;
    int Pages;
    Book(string name, string author, int pages)
    {
        cout << "Creating a book" << endl;
        Name = name;
        Author = author;
        Pages = pages;
    }
};

// using pointer functions
void increment(int *number)
{
    *number = *number + 1;
}

int main()
{
    cout << "Hello World" << endl;
    int number = 5;
    number = add(number, 5);

    cout << "The sum is " << number << endl;
    increment(&number);
    cout << number << endl;
    Book book1("Harry Potter", "JK Rowling", 250);
    return 0;
}
