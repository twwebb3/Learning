/*  Sorting Orders
Write a program that uses two identical arrays of just eight integers. It should display 
the contents of the first array, then call a function to sort the array using an ascending 
order bubble sort modified to print out the array contents after each pass of the sort.
Next, the program should display the contents of the second array, then call a function 
to sort the array using an ascending order selection sort modified to print out the 
array contents after each pass of the sort.
*/

#include <iostream>

using namespace std;

void printArray(int[], int);

int main()
{
    const int SIZE = 8;
    int numbers1[SIZE] = {8, 7, 6, 5, 4, 3, 2, 1};
    int numbers2[SIZE] = {8, 7, 6, 5, 4, 3, 2, 1};
    int maxElement;
    int index;
    int count = 0;

    cout << "The contents of the first array are: ";
    printArray(numbers1, SIZE);
    cout << endl;

    // Bubble sort
    for (maxElement = SIZE - 1; maxElement > 0; maxElement--)
    {
        for (index = 0; index < maxElement; index++)
        {
            if (numbers1[index] > numbers1[index + 1])
            {
                int temp = numbers1[index];
                numbers1[index] = numbers1[index + 1];
                numbers1[index + 1] = temp;
                count++;
            }
        }

        cout << "The contents of the array after the pass are: ";
        printArray(numbers1, SIZE);
    }
    
    
    cout << "The contents of the second array are: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << numbers2[i] << " ";
    }
    cout << endl;

    // Selection sort
    for (int startScan = 0; startScan < (SIZE - 1); startScan++)
    {
        int minIndex = startScan;
        int minValue = numbers2[startScan];

        for (int index = startScan + 1; index < SIZE; index++)
        {
            if (numbers2[index] < minValue)
            {
                minValue = numbers2[index];
                minIndex = index;
            }
        }

        numbers2[minIndex] = numbers2[startScan];
        numbers2[startScan] = minValue;

        cout << "The contents of the array after the pass are: ";
        printArray(numbers2, SIZE);
    }
    
    return 0;
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
