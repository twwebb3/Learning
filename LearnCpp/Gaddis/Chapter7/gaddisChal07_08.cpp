/*  Proper Words
Write a function that uses an array parameter to accept a string as its argument. It 
should convert the first letter of each word in the string to uppercase. If any of the 
letters are already uppercase, they should be left alone. (See the hint in Problem 7 for 
help on converting lowercase characters to uppercase.) Demonstrate the function in a 
simple program that asks the user to input a string, passes it to the function, and then 
displays the string after it has been modified.
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void properWords(char[], int);

int main()
{
    const int SIZE = 100;
    char letters[SIZE];
    int i = 0;

    cout << "Enter a string: " << endl;
    cin.getline(letters, SIZE);

    properWords(letters, SIZE);

    cout << "The string in uppercase is: " << endl;
    cout << letters << endl;

    return 0;
}

void properWords(char letters[], int SIZE)
{
    int i = 0;

    while (letters[i] != '\0')
    {
        if (letters[i] >= 97 && letters[i] <= 122)
        {
            letters[i] -= 32;
        }
        i++;
    }
}
