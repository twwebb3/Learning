/*  Sentence Capitalizer
Write a function that accepts a pointer to a C-string as an argument and capitalizes 
the first character of each sentence in the string. For instance, if the string argument is
"hello. my name is Joe. what is your name?" the function should manipulate 
the string so it contains "Hello. My name is Joe. What is your name?" Demonstrate 
the function in a program that asks the user to input a string and then passes it 
to the function. The modified string should be displayed on the screen. Optional 
Exercise: Write an overloaded version of this function that accepts a string class 
object as its argument.
*/

#include <iostream>
#include <string>

using namespace std;

void sentenceCapitalizer(char *);
void sentenceCapitalizer(string);

int main()
{
    const int SIZE = 100;
    char str[SIZE];

    cout << "Enter a string: ";
    cin.getline(str, SIZE);

    sentenceCapitalizer(str);

    string str2;

    cout << "Enter a string: ";
    getline(cin, str2);

    sentenceCapitalizer(str2);

    return 0;
}

void sentenceCapitalizer(char *str)
{
    char *start = str;
    *str = toupper(*str);

    while (*str != '\0')
    {
        if (*str == '.')
        {
            str++;
            *str = toupper(*str);
        }

        str++;
    }

    cout << start << endl;
}

void sentenceCapitalizer(string str)
{
    str[0] = toupper(str[0]);

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '.')
        {
            str[i + 2] = toupper(str[i + 2]);
        }
    }

    cout << str << endl;
}