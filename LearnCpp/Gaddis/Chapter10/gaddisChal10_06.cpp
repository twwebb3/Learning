/*  Vowes and Consonants
Write a function that accepts a pointer to a C-string as its argument. The function 
should count the number of vowels appearing in the string and return that number.
Write another function that accepts a pointer to a C-string as its argument. This 
function should count the number of consonants appearing in the string and return that 
number.
Demonstrate these two functions in a program that performs the following steps:
1. The user is asked to enter a string.
2. The program displays the following menu:
   A) Count the number of vowels in the string
   B) Count the number of consonants in the string
   C) Count both the vowels and consonants in the string
   D) Enter another string
   E) Exit the program
3. The program performs the operation selected by the user and repeats until the 
   user selects E to exit the program.
*/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int vowelCounter(char *);
int consonantCounter(char *);

int main()
{
    const int SIZE = 100;
    char str[SIZE];
    char choice;

    cout << "Enter a string: ";
    cin.getline(str, SIZE);

    do
    {
        cout << "A) Count the number of vowels in the string\n"
             << "B) Count the number of consonants in the string\n"
             << "C) Count both the vowels and consonants in the string\n"
             << "D) Enter another string\n"
             << "E) Exit the program\n"
             << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (toupper(choice))
        {
            case 'A':
                cout << "The number of vowels in the string is " << vowelCounter(str) << endl;
                break;
            case 'B':
                cout << "The number of consonants in the string is " << consonantCounter(str) << endl;
                break;
            case 'C':
                cout << "The number of vowels in the string is " << vowelCounter(str) << endl;
                cout << "The number of consonants in the string is " << consonantCounter(str) << endl;
                break;
            case 'D':
                cout << "Enter a string: ";
                cin.getline(str, SIZE);
                break;
            case 'E':
                cout << "Exiting the program...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (toupper(choice) != 'E');

    return 0;
}

int vowelCounter(char *str)
{
    int count = 0;

    while (*str != '\0')
    {
        if (toupper(*str) == 'A' || toupper(*str) == 'E' || toupper(*str) == 'I' || toupper(*str) == 'O' || toupper(*str) == 'U')
        {
            count++;
        }

        str++;
    }

    return count;
}

int consonantCounter(char *str)
{
    int count = 0;

    while (*str != '\0')
    {
        if (isalpha(*str) && toupper(*str) != 'A' && toupper(*str) != 'E' && toupper(*str) != 'I' && toupper(*str) != 'O' && toupper(*str) != 'U')
        {
            count++;
        }

        str++;
    }

    return count;
}
