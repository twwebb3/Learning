/*  Number Array Class
Design a class that has an array of floating-point numbers. The constructor should 
accept an integer argument and dynamically allocate the array to hold that many 
numbers. The destructor should free the memory held by the array. In addition, 
there should be member functions to perform the following operations:
• Store a number in any element of the array
• Retrieve a number from any element of the array
• Return the highest value stored in the array
• Return the lowest value stored in the array
• Return the average of all the numbers stored in the array
Demonstrate the class in a program.
*/

#include <iostream>
#include <iomanip>

using namespace std;

class NumberArray
{
private:
    int size;
    double *array;
public:
    NumberArray(int s)
    {
        size = s;
        array = new double[size];
    }
    ~NumberArray()
    {
        delete [] array;
    }
    void storeNumber(int index, double value)
    {
        array[index] = value;
    }
    double retrieveNumber(int index)
    {
        return array[index];
    }
    double getHighest()
    {
        double highest = array[0];
        for (int i = 1; i < size; i++)
        {
            if (array[i] > highest)
            {
                highest = array[i];
            }
        }
        return highest;
    }
    double getLowest()
    {
        double lowest = array[0];
        for (int i = 1; i < size; i++)
        {
            if (array[i] < lowest)
            {
                lowest = array[i];
            }
        }
        return lowest;
    }
    double getAverage()
    {
        double total = 0;
        for (int i = 0; i < size; i++)
        {
            total += array[i];
        }
        return total / size;
    }
};

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    while (size < 1)
    {
        cout << "The size of the array cannot be less than 1. Please enter a size greater than 0: ";
        cin >> size;
    }
    NumberArray numbers(size);
    for (int i = 0; i < size; i++)
    {
        double value;
        cout << "Enter the value for element " << i << ": ";
        cin >> value;
        numbers.storeNumber(i, value);
    }
    cout << "The highest value in the array is " << numbers.getHighest() << endl;
    cout << "The lowest value in the array is " << numbers.getLowest() << endl;
    cout << "The average of the values in the array is " << numbers.getAverage() << endl;
    return 0;
}
