/*  Sorting Benchmarks
Write a program that uses two identical arrays of at least 20 integers. It should call a 
function that uses the bubble sort algorithm to sort one of the arrays in ascending 
order. The function should keep a count of the number of exchanges it makes. The 
program then should call a function that uses the selection sort algorithm to sort the 
other array. It should also keep count of the number of exchanges it makes. Display
these values on the screen.
*/

#include <iostream>

using namespace std;

void bubbleSort(int[], int);
void selectionSort(int[], int);

int main()
{
    const int SIZE = 20;
    int numbers1[SIZE] = {20, 19, 18, 17, 16,
                          15, 14, 13, 12, 11,
                          10, 9, 8, 7, 6,
                          5, 4, 3, 2, 1};
    int numbers2[SIZE] = {20, 19, 18, 17, 16,
                          15, 14, 13, 12, 11,
                          10, 9, 8, 7, 6,
                          5, 4, 3, 2, 1};
    
    bubbleSort(numbers1, SIZE);
    selectionSort(numbers2, SIZE);
    
    return 0;
}

void bubbleSort(int array[], int size)
{
    int maxElement;
    int index;
    int count = 0;
    
    for (maxElement = size - 1; maxElement > 0; maxElement--)
    {
        for (index = 0; index < maxElement; index++)
        {
            if (array[index] > array[index + 1])
            {
                int temp = array[index];
                array[index] = array[index + 1];
                array[index + 1] = temp;
                count++;
            }
        }
    }

    cout << "Bubble sort exchanges: " << count << endl;
}

void selectionSort(int array[], int size)
{
    int startScan, minIndex, minValue;
    int count = 0;
    
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
                count++;
            }
        }
        
        array[minIndex] = array[startScan];
        array[startScan] = minValue;
    }

    cout << "Selection sort exchanges: " << count << endl;
}
