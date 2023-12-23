/*  Element Shifter
Write a function that accepts an int array and the array's size as arguments. The 
function should create a new array that is one element larger than the argument array.
The first element of the new array should be set to O. Element 0 of the argument array 
should be copied to element 1 of the new array, element 1 of the argument array 
should be copied to element 2 of the new array, and so forth. The function should 
return a pointer to the new array.
*/

#include <iostream>

using namespace std;

int *shiftArray(int *, int);
void displayArray(int *, int);

int main()
{
    int *array;
    int *shifted;
    int size;

    cout << "How many elements do you want to allocate? ";
    cin >> size;

    array = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array[i];
    }

    shifted = shiftArray(array, size);

    displayArray(array, size);
    displayArray(shifted, size + 1);

    delete [] array;
    array = nullptr;

    delete [] shifted;
    shifted = nullptr;

    return 0;
}

int *shiftArray(int *array, int size)
{
    int *shifted = nullptr;

    shifted = new int[size + 1];

    shifted[0] = 0;

    for (int i = 0; i < size; i++)
    {
        shifted[i + 1] = array[i];
    }

    return shifted;
}

void displayArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}

