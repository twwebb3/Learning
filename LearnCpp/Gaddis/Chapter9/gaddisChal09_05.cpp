/*  getString Function
Write a function named getString that has a local char array of 80 elements. The 
function should ask the user to enter a sentence, and store the sentence in the array.
Then the function should dynamically allocate a char array just large enough to hold 
the sentence, plus the null terminator. It should copy the sentence to the dynamically 
allocated array, and then return a pointer to the array. Demonstrate the function in a 
complete program.
*/

#include <iostream>
#include <cstring>

using namespace std;

char *getString();

int main()
{
    char *string;

    string = getString();

    cout << string << endl;

    delete [] string;
    string = nullptr;

    return 0;
}

char *getString()
{
    char string[80];
    char *newString = nullptr;

    cout << "Enter a sentence: ";
    cin.getline(string, 80);

    newString = new char[strlen(string) + 1];

    strcpy(newString, string);

    return newString;
}