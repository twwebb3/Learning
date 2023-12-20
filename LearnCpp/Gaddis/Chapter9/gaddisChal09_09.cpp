/*  Median Function
In statistics, when a set of values is sorted in ascending or descending order, its median 
is the middle value. If the set contains an even number of values, the median is the
mean, or average, of the two middle values. Write a function that accepts as arguments
the following:
A) An array of integers
B) An integer that indicates the number of elements in the array
The function should determine the median of the array. This value should be returned 
as a double. (Assume the values in the array are already sorted.)
Demonstrate your pointer prowess by using pointer notation instead of array 
notation in this function.
*/

#include <iostream>

using namespace std;

int *allocateArray(int);
void sortArray(int *, int);
double averageArray(int *, int);
void displayArray(int *, int);
int modeArray(int *, int);
double medianArray(int *, int);

int main()
{
    int *array;
    int size;
    double average;
    int mode;
    double median;

    cout << "How many test scores do you want to enter? ";
    cin >> size;

    array = allocateArray(size);

    sortArray(array, size);

    average = averageArray(array, size);

    displayArray(array, size);

    mode = modeArray(array, size);

    median = medianArray(array, size);

    cout << "The average score is " << average << endl;
    cout << "The mode is " << mode << endl;
    cout << "The median is " << median << endl;

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
    double average = 0;

    for (int i = 0; i < size; i++)
    {
        average += array[i];
    }

    average /= size;

    return average;
}

void displayArray(int *array, int size)
{
    cout << "The test scores are: ";

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }

    cout << endl;
}

int modeArray(int *array, int size)
{
    int mode = array[0];
    int count = 1;
    int countMode = 1;

    for (int i = 1; i < size; i++)
    {
        if (array[i] == array[i - 1])
        {
            count++;
        }
        else
        {
            if (count > countMode)
            {
                countMode = count;
                mode = array[i - 1];
            }

            count = 1;
        }
    }

    return mode;
}

double medianArray(int *array, int size)
{
    double median;

    if (size % 2 == 0)
    {
        median = (array[size / 2] + array[(size / 2) - 1]) / 2.0;
    }
    else
    {
        median = array[size / 2];
    }

    return median;
}