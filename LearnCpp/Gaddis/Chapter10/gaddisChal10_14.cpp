/*  Word Separator
Write a program that accepts as input a sentence in which all of the words are run 
together, but the first character of each word is uppercase. Convert the sentence to a 
string in which the words are separated by spaces and only the first word starts with 
an uppercase letter. For example the string "StopAndSmellTheRoses." would be converted 
to "Stop and smell the roses.""
*/

#include <iostream>
#include <string>

using namespace std;

string wordSeparator(string);

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << wordSeparator(str) << endl;

    return 0;
}

string wordSeparator(string str)
{
    string newStr;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            newStr += ' ';
            newStr += str[i] + 32;
        }
        else
        {
            newStr += str[i];
        }
    }

    return newStr;
}