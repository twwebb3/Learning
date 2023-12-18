/*  Array Allocator
Write a function that dynamically allocates an array of integers. The function should 
accept an integer argument indicating the number of elements to allocate. The function 
should return a pointer to the array.
*/

#include <iostream>

using namespace std;

int *allocateArray(int);

int main()
{
    int *array;
    int size;

    cout << "How many elements do you want to allocate? ";
    cin >> size;

    array = allocateArray(size);

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }

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
        array[i] = i;
    }

    return array;
}
