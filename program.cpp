#include <iostream>
#include <cmath>
#include "functions.h"
using namespace std;

/*
    Write a class called Circle. This class should consist of two data members i.e. radius and area. 
    Your class should have THREE functions. One for inputting radius, Second for Calculating Area 
    (having name CalculateArea() ), Third one to display the radius and area of circle. Constructor(s) 
    and destructor are optional. Create object of the class and call the functions defined in the class. 
    Clearly mention accessor and mutator in your program. Also properly comment your program.
*/

class Circle
{
private:
    double radius;
    double area;

public:
    // default constructor
    Circle()
    {
        radius = 1;
    }

    // overloaded constructor with radius as parameter
    Circle(double r)
    {
        radius = r;
    }

    // Radius accessor
    double GetRadius()
    {
        return radius;
    }

    // Radius mutator
    void SetRadius(double r)
    {
        radius = r;
    }

    // Calculate area using pi * radius ^ 2
    void CalculateArea()
    {
        area = 3.1415 * pow(radius, 2);
    }

    // Display the circle function
    void Display()
    {
        cout << "Area of circle with radius " << radius << " is " << area << endl;
    }
};

int main()
{
    Circle circle1;
    circle1.SetRadius(5);
    circle1.CalculateArea();
    circle1.Display();

    Circle circle2;
    circle2.CalculateArea();
    circle2.Display();

    Circle circle3 = Circle(7);
    circle3.CalculateArea();
    circle3.Display();
    return 0;
}
