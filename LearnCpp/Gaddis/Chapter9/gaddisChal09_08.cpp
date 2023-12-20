/*  Mode Function
In statistics, the mode of a set of values is the value that occurs most often or with the 
greatest frequency. Write a function that accepts as arguments the following:
A) An array of integers
B) An integer that indicates the number of elements in the array
The function should determine the mode of the array. That is, it should determine 
which value in the array occurs most often. The mode is the value the function should 
return. If the array has no mode (none of the values occur more than once), the function 
should return -1. (Assume the array will always contain nonnegative values.)
Demonstrate your pointer prowess by using pointer notation instead of array notation 
in this function.
*/

#include <iostream>

using namespace std;

int *allocateArray(int);
void sortArray(int *, int);
double averageArray(int *, int);
void displayArray(int *, int);
int modeArray(int *, int);

int main()
{
    int *array;
    int size;
    double average;
    int mode;

    cout << "How many test scores do you want to enter? ";
    cin >> size;

    array = allocateArray(size);

    sortArray(array, size);

    average = averageArray(array, size);

    displayArray(array, size);

    mode = modeArray(array, size);

    cout << "The average score is " << average << endl;
    cout << "The mode is " << mode << endl;

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

        for (int i = 0; i < (size - 1); i++)
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
    cout << "The test scores, sorted in ascending order, are: \n";

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;
}

int modeArray(int *array, int size)
{
    int mode = -1;
    int count = 0;
    int maxCount = 0;

    for (int i = 0; i < size; i++)
    {
        count = 0;

        for (int j = 0; j < size; j++)
        {
            if (array[i] == array[j])
            {
                count++;
            }
        }

        if (count > maxCount)
        {
            maxCount = count;
            mode = array[i];
        }
    }

    return mode;
}