/*  Largest/Smallest Array Values
Write a program that lets the user enter 10 values into an array. The program should 
then display the largest and smallest values stored in the
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int SIZE = 10;
    int numbers[SIZE];
    int largest, smallest;

    cout << "Enter 10 numbers: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cin >> numbers[i];
    }

    largest = numbers[0];
    smallest = numbers[0];

    for (int i = 0; i < SIZE; i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
        if (numbers[i] < smallest)
        {
            smallest = numbers[i];
        }
    }

    cout << "The largest number is: " << largest << endl;
    cout << "The smallest number is: " << smallest << endl;

    return 0;
}