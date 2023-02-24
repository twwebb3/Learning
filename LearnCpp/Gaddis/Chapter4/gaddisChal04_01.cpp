/* Minimum/Maximum
Write a program that asks the user to enter two numbers.
The program should use the conditional operator to determine
which number is the smaller and which is the larger
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num1, num2;
    int min, max;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    min = (num1 < num2) ? num1 : num2;
    max = (num1 > num2) ? num1 : num2;

    cout << "The smaller number is " << min << endl;
    cout << "The larger number is " << max << endl;

    return 0;
}
