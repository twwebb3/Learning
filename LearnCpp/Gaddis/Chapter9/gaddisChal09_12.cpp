/*  Array Expander
Write a function that accepts an int array and the array's size as arguments. The 
function should create a new array that is twice the size of the argument array. The 
function should copy the contents of the argument array to the new array, and initialize 
the unused elements of the second array with 0. The function should return a 
pointer to the new array.
*/

#include <iostream>

using namespace std;

int *expandArray(int *, int);
void displayArray(int *, int);

int main()
{
    int *array;
    int *expanded;
    int size;

    cout << "How many elements do you want to allocate? ";
    cin >> size;

    array = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array[i];
    }

    expanded = expandArray(array, size);

    displayArray(array, size);
    displayArray(expanded, size * 2);

    delete [] array;
    array = nullptr;

    delete [] expanded;
    expanded = nullptr;

    return 0;
}

int *expandArray(int *array, int size)
{
    int *expanded = nullptr;

    expanded = new int[size * 2];

    for (int i = 0; i < size; i++)
    {
        expanded[i] = array[i];
    }

    for (int i = size; i < size * 2; i++)
    {
        expanded[i] = 0;
    }

    return expanded;
}

void displayArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}

