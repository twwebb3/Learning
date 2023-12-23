/*  Backward String
Write a function that accepts a pointer to a C-string as an argument and displays its 
contents backward. For instance, if the string argument is "Gravity" the function 
should display "ytivarG". Demonstrate the function in a program that asks the user
to input a string and then passes it to the function.
*/

#include <iostream>
#include <cstring>

using namespace std;

void backwardString(char *);

int main()
{
    const int SIZE = 100;
    char str[SIZE];

    cout << "Enter a string: ";
    cin.getline(str, SIZE);

    backwardString(str);

    return 0;
}

void backwardString(char *str)
{
    int length = strlen(str);

    for (int i = length - 1; i >= 0; i--)
    {
        cout << *(str + i);
    }

    cout << endl;
}