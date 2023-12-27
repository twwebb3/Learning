/*  Case Manipulator
Write a program with three functions: upper, lower, and reverse. The upper 
function should accept a pointer to a C-string as an argument. It should step through each 
character in the string, converting it to uppercase. The lower function, too, should 
accept a pointer to a C-string as an argument. It should step through each character in 
the string, converting it to lowercase. Like upper and lower, reverse should also 
accept a pointer to a string. As it steps through the string, it should test each character 
to determine whether it is upper- or lowercase. If a character is uppercase, it should be
converted to lowercase. Likewise, if a character is lowercase, it should be converted to
uppercase.
Test the functions by asking for a string in function main, then passing it to them in 
the following order: reverse, lower, and upper.
*/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void upper(char *);
void lower(char *);
void reverse(char *);

int main()
{
    const int SIZE = 100;
    char str[SIZE];

    cout << "Enter a string: ";
    cin.getline(str, SIZE);

    reverse(str);
    lower(str);
    upper(str);

    return 0;
}

void upper(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = toupper(str[i]);
    }

    cout << str << endl;
}

void lower(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = tolower(str[i]);
    }

    cout << str << endl;
}

void reverse(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
        else if (islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
    }

    cout << str << endl;
}
