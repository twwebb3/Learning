/* Areas of Rectangles
The area of a rectangle is the rectangle's length times its width. Write a program that
asks for the length and width of two rectangles. The program should tell the user 
which rectangle has the greater area, or if the areas are the same.*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int length1, width1, length2, width2;
    int area1, area2;

    cout << "Enter the length and width of the first rectangle: ";
    cin >> length1 >> width1;
    cout << "Enter the length and width of the second rectangle: ";
    cin >> length2 >> width2;

    area1 = length1 * width1;
    area2 = length2 * width2;

    if (area1 > area2)
        cout << "The first rectangle has the greater area" << endl;
    else if (area2 > area1)
        cout << "The second rectangle has the greater area" << endl;
    else
        cout << "The areas of the rectangles are the same" << endl;

    return 0;
}