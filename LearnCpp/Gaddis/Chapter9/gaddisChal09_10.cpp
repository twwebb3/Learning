/*  Reverse Array
Write a function that accepts an int array and the array's size as arguments. The 
function should create a copy of the array, except that the element values should be 
reversed in the copy. The function should return a pointer to the new array. Demonstrate 
the function in a complete program.
*/

#include <iostream>

using namespace std;

int *reverseArray(int *, int);
void displayArray(int *, int);

int main()
{
    int *array;
    int *reverse;
    int size;

    cout << "How many elements do you want to allocate? ";
    cin >> size;

    array = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array[i];
    }

    reverse = reverseArray(array, size);

    displayArray(array, size);
    displayArray(reverse, size);

    delete [] array;
    array = nullptr;

    delete [] reverse;
    reverse = nullptr;

    return 0;
}

int *reverseArray(int *array, int size)
{
    int *reverse = nullptr;

    reverse = new int[size];

    for (int i = 0; i < size; i++)
    {
        reverse[i] = array[size - i - 1];
    }

    return reverse;
}

void displayArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}

