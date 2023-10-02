/*  Student Line Up
A teacher has asked all her students to line up single file according to their first name.
For example, in one class Amy will be at the front of the line and Yolanda will be at 
the end. Write a program that prompts the user to enter the number of students in the 
class, then loops to read in that many names. Once all the names have been read in it 
reports which student would be at the front of the line and which one would be at the 
end of the line. You may assume that no two students have the same name.

Input Validation: Do not accept a number less than 1 or greater than 25 for the 
number of students.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int students;
    string name, first, last;

    cout << "How many students are in the class? ";
    cin >> students;

    while (students < 1 || students > 25)
    {
        cout << "Please enter a number between 1 and 25: ";
        cin >> students;
    }

    for (int i = 1; i <= students; i++)
    {
        cout << "Enter the name of student " << i << ": ";
        cin >> name;

        if (i == 1)
        {
            first = name;
            last = name;
        }
        else if (name < first)
        {
            first = name;
        }
        else if (name > last)
        {
            last = name;
        }
    }

    cout << "First student in line: " << first << endl;
    cout << "Last student in line: " << last << endl;

    return 0;
}