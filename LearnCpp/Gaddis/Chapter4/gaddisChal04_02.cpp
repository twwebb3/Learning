/* Roman Numeral Converter
Write a program that asks the user to enter a number within the range of 1 through
10. Use a switch statement to display the Roman numberal version of that number.

Input Validation: Do not accept a number less than 1 or greater than 10.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num;

    cout << "Enter a number within the range of 1 through 10: ";
    cin >> num;

    switch (num)
    {
        case 1:
            cout << "The Roman numeral version of " << num << " is I" << endl;
            break;
        case 2:
            cout << "The Roman numeral version of " << num << " is II" << endl;
            break;
        case 3:
            cout << "The Roman numeral version of " << num << " is III" << endl;
            break;
        case 4:
            cout << "The Roman numeral version of " << num << " is IV" << endl;
            break;
        case 5:
            cout << "The Roman numeral version of " << num << " is V" << endl;
            break;
        case 6:
            cout << "The Roman numeral version of " << num << " is VI" << endl;
            break;
        case 7:
            cout << "The Roman numeral version of " << num << " is VII" << endl;
            break;
        case 8:
            cout << "The Roman numeral version of " << num << " is VIII" << endl;
            break;
        case 9:
            cout << "The Roman numeral version of " << num << " is IX" << endl;
            break;
        case 10:
            cout << "The Roman numeral version of " << num << " is X" << endl;
            break;
        default:
            cout << "You did not enter a number within the range of 1 through 10" << endl;
    }

    return 0;
}
