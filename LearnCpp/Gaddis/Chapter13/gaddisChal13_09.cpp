/*  Circle Class
Write a Circle class that has the following member variables:
• radius: a double
• pi: a double initialized with the value 3.14159

The class should have the following member functions:
• Default Constructor. A default constructor that sets radius to 0.0.
• Constructor. Accepts the radius of the circle as an argument.
• setRadius. A mutator function for the radius variable. 
• getRadius. An accessor function for the radius variable. 
• getArea. Returns the area of the circle, which is calculated as
  area = pi * radius * radius
• getDiameter. Returns the diameter of the circle, which is calculated as
  diameter = radius * 2
• getCircumference. Returns the circumference of the circle, which is calculated as
  circumference = 2 * pi * radius

Write a program that demonstrates the Circle class by asking the user for the circle's 
radius, creating a Circle object, and then reporting the circle's area, diameter, and
circumference.
*/

#include <iostream>
#include <iomanip>

using namespace std;

class Circle
{
private:
    double radius;
    double pi;
public:
    Circle()
    {
        radius = 0.0;
        pi = 3.14159;
    }
    Circle(double r)
    {
        radius = r;
        pi = 3.14159;
    }
    void setRadius(double r)
    {
        radius = r;
    }
    double getRadius()
    {
        return radius;
    }
    double getArea()
    {
        return pi * radius * radius;
    }
    double getDiameter()
    {
        return radius * 2;
    }
    double getCircumference()
    {
        return 2 * pi * radius;
    }
};

int main()
{
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    Circle circle(radius);
    cout << fixed << showpoint << setprecision(2);
    cout << "The area of the circle is " << circle.getArea() << endl;
    cout << "The diameter of the circle is " << circle.getDiameter() << endl;
    cout << "The circumference of the circle is " << circle.getCircumference() << endl;
    return 0;
}
