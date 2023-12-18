/*  Test Scores #1
Write a program that dynamically allocates an array large enough to hold a user-
defined number of test scores. Once all the scores are entered, the array should be 
passed to a function that sorts them in ascending order. Another function should be 
called that calculates the average score. The program should display the sorted list of 
scores and averages with appropriate headings. Use pointer notation rather than array 
notation whenever possible.

Input Validation: Do not accept negative numbers for test scores.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int *allocateArray(int);
void sortArray(int *, int);
double averageArray(int *, int);
void displayArray(int *, int);

int main()
{
    int *array;
    int size;
    double average;

    cout << "How many test scores do you want to enter? ";
    cin >> size;

    array = allocateArray(size);

    sortArray(array, size);

    average = averageArray(array, size);

    displayArray(array, size);

    cout << "The average score is " << average << endl;

    delete [] array;
    array = nullptr;

    return 0;
}

int *allocateArray(int size)
{
    int *array = nullptr;

    if (size <= 0)
    {
        return nullptr;
    }

    array = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter test score " << i + 1 << ": ";
        cin >> array[i];

        while (array[i] < 0)
        {
            cout << "Test scores cannot be negative. Please enter a positive number: ";
            cin >> array[i];
        }
    }

    return array;
}

void sortArray(int *array, int size)
{
    bool swap;
    int temp;

    do
    {
        swap = false;

        for (int i = 0; i < size - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;

                swap = true;
            }
        }
    } while (swap);
}

double averageArray(int *array, int size)
{
    double total = 0;

    for (int i = 0; i < size; i++)
    {
        total += array[i];
    }

    return total / size;
}

void displayArray(int *array, int size)
{
    cout << "The test scores in ascending order are: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}

