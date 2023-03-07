/* Geometry Calculator
Write a program that displays the following menu:

Geometry Calculator

1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4. Quit

Enter your choice (1-4):

If the user enters 1, the program should ask for the radius of the circle and then dis-
play its area. Use the following formula:
area = pi*r^2
Use 3.14159 for pi and the radius of the circle for r. If the user enters 2, the program
should ask for the length and width of the rectangle and then display the rectangle's
area. Use the following formula:
area = length * width
If the user enters 3 the program should ask for the length of the triangle's base and its
height, and then display its area. Use the following formula:
area = base * height * .5
If the user enters 4, the program should end.

Input Validation: Display an error message if the user enters a number outside the range
of 1 through 4 when selecting an item from the menu. Do not accept negative values for
the circle's radius, the rectangle's length or width, or the triangle's base or height.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int choice;
    double radius, length, width, base, height, area;

    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter the radius of the circle: ";
        cin >> radius;

        if (radius < 0)
        {
            cout << "Invalid radius" << endl;
        }
        else
        {
            area = 3.14159 * pow(radius, 2);
            cout << "The area of the circle is " << area << endl;
        }
    }
    else if (choice == 2)
    {
        cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width of the rectangle: ";
        cin >> width;

        if (length < 0 || width < 0)
        {
            cout << "Invalid length or width" << endl;
        }
        else
        {
            area = length * width;
            cout << "The area of the rectangle is " << area << endl;
        }
    }
    else if (choice == 3)
    {
        cout << "Enter the base of the triangle: ";
        cin >> base;
        cout << "Enter the height of the triangle: ";
        cin >> height;

        if (base < 0 || height < 0)
        {
            cout << "Invalid base or height" << endl;
        }
        else
        {
            area = base * height * .5;
            cout << "The area of the triangle is " << area << endl;
        }
    }
    else if (choice == 4)
    {
        cout << "Program ending" << endl;
    }
    else
    {
        cout << "Invalid choice" << endl;
    }

    return 0;
}