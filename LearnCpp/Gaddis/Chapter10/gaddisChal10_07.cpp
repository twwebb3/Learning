/*  Name Arranger
Write a program that asks for the user's first, middle, and last names. The names 
should be stored in three different character arrays. The program should then store, in 
a fourth array, the name arranged in the following manner: the last name followed by 
a comma and a space, followed by the first name and a space, followed by the middle 
name. For example, if the user entered "Carol Lynn Smith", it should store
"Smith, Carol Lynn" in the fourth array. Display the contents of the fourth array 
on the screen.
*/

#include <iostream>
#include <string>

using namespace std;

void nameArranger(char *, char *, char *, char *);

int main()
{
    const int SIZE = 100;
    char firstName[SIZE];
    char middleName[SIZE];
    char lastName[SIZE];
    char fullName[SIZE];

    cout << "Enter your first name: ";
    cin.getline(firstName, SIZE);

    cout << "Enter your middle name: ";
    cin.getline(middleName, SIZE);

    cout << "Enter your last name: ";
    cin.getline(lastName, SIZE);

    nameArranger(firstName, middleName, lastName, fullName);

    cout << fullName << endl;

    return 0;
}

void nameArranger(char *firstName, char *middleName, char *lastName, char *fullName)
{
    int length = strlen(lastName);
    lastName[length] = ',';
    lastName[length + 1] = ' ';
    lastName[length + 2] = '\0';

    strcat(lastName, firstName);
    strcat(lastName, " ");
    strcat(lastName, middleName);

    strcpy(fullName, lastName);
}

