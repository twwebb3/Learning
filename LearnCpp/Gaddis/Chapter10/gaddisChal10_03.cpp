/*  Word Counter
Write a function that accepts a pointer to a C-string as an argument and returns the 
number of words contained in the string. For instance, if the string argument is "Four 
score and seven years ago" the function should return the number 6. Demonstrate the 
function in a program that asks the user to input a string and then passes it to the 
function. The number of words in the string should be displayed on the screen.
Optional Exercise: Write an overloaded version of this function that accepts a string
class object as its argument.
*/

#include <iostream>
#include <string>

using namespace std;

int wordCounter(char *);
int wordCounter(string);

int main()
{
    const int SIZE = 100;
    char str[SIZE];

    cout << "Enter a string: ";
    cin.getline(str, SIZE);

    cout << "The number of words in the string is " << wordCounter(str) << endl;

    string str2;

    cout << "Enter a string: ";
    getline(cin, str2);

    cout << "The number of words in the string is " << wordCounter(str2) << endl;

    return 0;
}

int wordCounter(char *str)
{
    int count = 0;

    while (*str != '\0')
    {
        if (*str == ' ')
        {
            count++;
        }

        str++;
    }

    return count + 1;
}

int wordCounter(string str)
{
    int count = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }

    return count + 1;
}
