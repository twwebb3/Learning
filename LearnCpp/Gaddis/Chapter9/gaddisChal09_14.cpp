/*  Movie Statistics
Write a program that can be used to gather statistical data about the number of movies 
college students see in a month. The program should perform the following steps:
A) Ask the user how many students were surveyed. An array of integers with this 
   many elements should then be dynamically allocated.
B) Allow the user to enter the number of movies each student saw into the array.
C) Calculate and display the average, median, and mode of the values entered. (Use 
   the functions you wrote in Problems 8 and 9 to calculate the median and mode.)
Input Validation: Do not accept negative numbers for input.
*/

#include <iostream>
#include <iomanip>

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

    cout << "How many students were surveyed? ";
    cin >> size;

    array = allocateArray(size);

    sortArray(array, size);

    average = averageArray(array, size);

    displayArray(array, size);

    mode = modeArray(array, size);

    median = medianArray(array, size);

    cout << "The average number of movies seen is " << average << endl;
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
        cout << "Enter the number of movies seen by student #" << i + 1 << ": ";
        cin >> array[i];

        while (array[i] < 0)
        {
            cout << "Please enter a positive number: ";
            cin >> array[i];
        }
    }

    return array;
}

void sortArray(int *array, int size)
{
    int startScan, minIndex, minValue;

    for (startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minValue = array[startScan];

        for (int index = startScan + 1; index < size; index++)
        {
            if (array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;
            }
        }

        array[minIndex] = array[startScan];
        array[startScan] = minValue;
    }
}

double averageArray(int *array, int size)
{
    double sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }

    return sum / size;
}

void displayArray(int *array, int size)
{
    cout << "The number of movies seen by each student is: \n";

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
