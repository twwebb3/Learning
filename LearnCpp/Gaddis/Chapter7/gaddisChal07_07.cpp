/*  Lowercase to Uppercase Converter
Write a program that lets the user enter a string into a character array. The program 
should then convert all the lowercase letters to uppercase. If a character is already 
uppercase, or is not a letter, it should be left alone.) Hint: Consult the ASCI chart in 
Appendix B. Notice that the lowercase letters are represented by the ASCII codes 97 
through 122. If you subtract 32 from any lowercase character's ASCI code, it will 
yield the ASCI code of the uppercase equivalent.
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    const int SIZE = 100;
    char letters[SIZE];
    int i = 0;

    cout << "Enter a string: " << endl;
    cin.getline(letters, SIZE);

    while (letters[i] != '\0')
    {
        if (letters[i] >= 97 && letters[i] <= 122)
        {
            letters[i] -= 32;
        }
        i++;
    }

    cout << "The string in uppercase is: " << endl;
    cout << letters << endl;

    return 0;
}