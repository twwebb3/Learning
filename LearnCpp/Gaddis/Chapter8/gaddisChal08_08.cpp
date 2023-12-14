/*  Search Benchmarks
Write a program that has an array of at least 20 integers. It should call a function that 
uses the linear search algorithm to locate one of the values. The function should keep 
a count of the number of comparisons it makes until it finds the value. The program 
then should call a function that uses the binary search algorithm to locate the same 
value. It should also keep count of the number of comparisons it makes. Display these 
values on the screen.
*/

#include <iostream>

using namespace std;

int linearSearch(int[], int, int);
int binarySearch(int[], int, int);

int main()
{
    const int SIZE = 20;
    int userNum;
    int linearResult,
        binaryResult;
    int numbers[SIZE] = {1, 2, 3, 4, 5,
                         6, 7, 8, 9, 10,
                         11, 12, 13, 14, 15,
                         16, 17, 18, 19, 20};
    
    cout << "Enter a number to search for: ";
    cin >> userNum;
    
    linearResult = linearSearch(numbers, SIZE, userNum);
    binaryResult = binarySearch(numbers, SIZE, userNum);
    
    cout << "Linear search comparisons: " << linearResult << endl;
    cout << "Binary search comparisons: " << binaryResult << endl;
    
    return 0;
}

int linearSearch(int array[], int size, int value)
{
    int index = 0;
    int position = -1;
    bool found = false;
    int count = 0;
    
    while (index < size && !found)
    {
        if (array[index] == value)
        {
            found = true;
            position = index;
        }
        
        index++;
        count++;
    }
    
    return count;
}

int binarySearch(int array[], int size, int value)
{
    int first = 0,
        last = size - 1,
        middle;
    int count = 0;
    bool found = false;
    
    while (!found && first <= last)
    {
        middle = (first + last) / 2;
        
        if (array[middle] == value)
        {
            found = true;
        }
        else if (array[middle] > value)
        {
            last = middle - 1;
        }
        else
        {
            first = middle + 1;
        }
        
        count++;
    }
    
    return count;
}
