/*  The Greatest and the Least of These
Write a program with a loop that lets the user enter a series of integers. The user 
should enter -99 to signal the end of the series. After all the numbers have been 
entered, the program should display the largest and smallest numbers entered.
*/

#include <iostream>

using namespace std;

int main()
{
    int number, largest, smallest;

    cout << "Enter a series of integers, ending with -99: ";
    cin >> number;

    largest = number;
    smallest = number;

    while (number != -99)
    {
        if (number > largest)
            largest = number;
        else if (number < smallest)
            smallest = number;

        cin >> number;
    }

    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;

    return 0;
}
