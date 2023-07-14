/* Characters for the ASCII Codes
Write a program that uses a loop to display the characters for the ASCII codes O 
through 127. Display 16 characters on each line.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int count = 0;

    for (int i = 0; i <= 127; i++)
    {
        cout << setw(3) << static_cast<char>(i) << " ";
        count++;

        if (count == 16)
        {
            cout << endl;
            count = 0;
        }
    }

    return 0;
}