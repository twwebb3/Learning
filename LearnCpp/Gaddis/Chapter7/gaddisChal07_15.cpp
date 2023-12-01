/*  Lottery Application
Write a program that simulates a lottery. The program should have an array of five 
integers named lottery, and should generate a random number in the range of 0 
through 9 for each element in the array. The user should enter five digits which should 
be stored in an integer array named user. The program is to compare the corresponding 
elements in the two arrays and keep a count of the digits that match. For example, 
the following shows the lottery array and the user array with sample numbers 
stored in each. There are two matching digits (elements 2 and 4).
lottery array:
7 4 9 1 3
user array:
4 2 9 7 3
The program should display the random numbers stored in the lottery array and the 
number of matching digits. If all of the digits match, display a message proclaiming 
the user as a grand prize winner.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const int SIZE = 5;
    int lottery[SIZE];
    int user[SIZE];
    int matchingDigits = 0;

    srand(time(0));

    cout << "Enter 5 numbers: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cin >> user[i];
    }

    cout << "Lottery numbers: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        lottery[i] = rand() % 10;
        cout << lottery[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < SIZE; i++)
    {
        if (user[i] == lottery[i])
        {
            matchingDigits++;
        }
    }

    cout << "Matching digits: " << matchingDigits << endl;

    if (matchingDigits == SIZE)
    {
        cout << "You are a grand prize winner!" << endl;
    }

    return 0;
}
