/*  Phone Numbers List
Write a program that has an array of at least 10 string objects that hold people's 
names and phone numbers. You may make up your own strings, or use the following:
"Becky Warren, 555-1223"
"Joe Looney, 555-0097"
"Geri Palmer, 555-8787"
"Lynn Presnell, 555-1212"
"Holly Gaddis, 555-8878"
"Sam Wiggins, 555-0998"
"Bob Kain, 555-8712"
"Tim Haynes, 555-7676"
"Warren Gaddis, 555-9037"
"Jean James, 555-4939"
"Ron Palmer, 555-2783"

The program should ask the user to enter a name or partial name to search for in the 
array. Any entries in the array that match the string entered should be displayed. For 
example, if the user enters "Palmer" the program should display the following names 
from the list:
Geri Palmer, 555-8787
Ron Palmer, 555-2783
*/

#include <iostream>
#include <string>

using namespace std;

void search(string[], int, string);

int main()
{
    const int SIZE = 11;
    string names[SIZE] = { "Becky Warren, 555-1223",
                           "Joe Looney, 555-0097",
                           "Geri Palmer, 555-8787",
                           "Lynn Presnell, 555-1212",
                           "Holly Gaddis, 555-8878",
                           "Sam Wiggins, 555-0998",
                           "Bob Kain, 555-8712",
                           "Tim Haynes, 555-7676",
                           "Warren Gaddis, 555-9037",
                           "Jean James, 555-4939",
                           "Ron Palmer, 555-2783" };
    string name;

    cout << "Enter a name or partial name to search for: ";
    getline(cin, name);

    search(names, SIZE, name);

    return 0;
}

void search(string names[], int size, string name)
{
    bool found = false;

    for (int i = 0; i < size; i++)
    {
        if (names[i].find(name) != string::npos)
        {
            cout << names[i] << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << "No matches found." << endl;
    }
}

