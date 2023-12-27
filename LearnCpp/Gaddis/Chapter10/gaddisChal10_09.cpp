/*  Most Frequent Character
Write a function that accepts either a pointer to a C-string, or a string object, as its 
argument. The function should return the character that appears most frequently in 
the string. Demonstrate the function in a complete program.
*/

#include <iostream>
#include <string>

using namespace std;

char mostFrequent(char *);
char mostFrequent(string);

int main()
{
    const int SIZE = 100;
    char str[SIZE];

    cout << "Enter a string: ";
    cin.getline(str, SIZE);

    cout << "The most frequent character in the string is " << mostFrequent(str) << endl;

    string str2;

    cout << "Enter a string: ";
    getline(cin, str2);

    cout << "The most frequent character in the string is " << mostFrequent(str2) << endl;

    return 0;
}

char mostFrequent(char *str)
{
    int count = 0;
    int maxCount = 0;
    char mostFrequentChar;

    for (int i = 0; i < strlen(str); i++)
    {
        for (int j = 0; j < strlen(str); j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }

        if (count > maxCount)
        {
            maxCount = count;
            mostFrequentChar = str[i];
        }

        count = 0;
    }

    return mostFrequentChar;
}

char mostFrequent(string str)
{
    int count = 0;
    int maxCount = 0;
    char mostFrequentChar;

    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }

        if (count > maxCount)
        {
            maxCount = count;
            mostFrequentChar = str[i];
        }

        count = 0;
    }

    return mostFrequentChar;
}
