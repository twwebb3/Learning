/*  Square Display
Write a program that asks the user for a positive integer no greater than 15. The 
program should then display a square on the screen using the character 'X'. The number 
entered by the user will be the length of each side of the square. For example, if the 
user enters 5, the program should display the following:

XXXXX
XXXXX
XXXXX
XXXXX
XXXXX

If the user enters 8, the program should display the following:
XXXXXXXX
XXXXXXXX
XXXXXXXX
XXXXXXXX
XXXXXXXX
XXXXXXXX
XXXXXXXX
XXXXXXXX
*/

#include <iostream>

using namespace std;

int main()
{
    int size;

    cout << "Enter a positive integer no greater than 15: ";
    cin >> size;

    while (size < 1 || size > 15)
    {
        cout << "Please enter a positive integer no greater than 15: ";
        cin >> size;
    }

    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
            cout << "X";

        cout << endl;
    }

    return 0;
}