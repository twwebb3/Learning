/*  String Length
Write a function that returns an integer and accepts a pointer to a C-string as an argu-
ment. The function should count the number of characters in the string and return 
that number. Demonstrate the function in a simple program that asks the user to input 
a string, passes it to the function, and then displays the function's return value.
*/

#include <iostream>
#include <cstring>

using namespace std;

int stringLength(char *);

int main()
{
    const int SIZE = 100;
    char str[SIZE];

    cout << "Enter a string: ";
    cin.getline(str, SIZE);

    cout << "The length of the string is " << stringLength(str) << endl;

    return 0;
}

int stringLength(char *str)
{
    int length = 0;

    while (*str != '\0')
    {
        length++;
        str++;
    }

    return length;
}
