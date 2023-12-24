/*  Average Number of Letters
Modify the program you wrote for Problem 3 (Word Counter), so it also displays the
average number of letters in each word.
*/

#include <iostream>
#include <string>

using namespace std;

int wordCounter(char *);
int wordCounter(string);
double avgLetters(char *);
double avgLetters(string);

int main()
{
    const int SIZE = 100;
    char str[SIZE];

    cout << "Enter a string: ";
    cin.getline(str, SIZE);

    cout << "The number of words in the string is " << wordCounter(str) << endl;
    cout << "The average number of letters in each word is " << avgLetters(str) << endl;

    string str2;

    cout << "Enter a string: ";
    getline(cin, str2);

    cout << "The number of words in the string is " << wordCounter(str2) << endl;
    cout << "The average number of letters in each word is " << avgLetters(str2) << endl;

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

double avgLetters(char *str)
{
    int count = 0;
    int length = 0;

    while (*str != '\0')
    {
        if (*str == ' ')
        {
            count++;
        }
        else
        {
            length++;
        }

        str++;
    }

    return (double)length / (count + 1);
}

double avgLetters(string str)
{
    int count = 0;
    int length = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
        else
        {
            length++;
        }
    }

    return (double)length / (count + 1);
}

