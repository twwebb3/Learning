/*  String Selection Sort
Modify the selectionSort function presented in this chapter so it searches an array 
of strings instead of an array of ints. Test the function with a driver program. Use 
Program 8-8 as a skeleton to complete.
*/

#include <iostream> 
using namespace std;

int main ()
{
    const int NUM_NAMES = 20, SIZE = 17;
    char names[NUM_NAMES][SIZE] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                                  "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
                                  "Taylor, Terri", "Johnson, Jill",
                                  "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
                                  "James, Jean", "Weaver, Jim", "Pore, Bob",
                                  "Rutherford, Greg", "Javens, Renee",
                                  "Harrison, Rose", "Setzer, Cathy",
                                  "Pike, Gordon", "Holland, Beth" };

    char startScan, minIndex, minValue;
    char userNum[SIZE];

    // Selection sort string array
    for (startScan = 0; startScan < (NUM_NAMES - 1); startScan++)
    {
        minIndex = startScan;
        minValue = names[startScan][0];

        for (int index = startScan + 1; index < NUM_NAMES; index++)
        {
            // compare the first character of each string check if equal first
            if (names[index][0] < minValue)
            {
                minValue = names[index][0];
                minIndex = index;
            }
        }

        names[minIndex][0] = names[startScan][0];
        names[startScan][0] = minValue;
    }

    // print sorted array
    for (int i = 0; i < NUM_NAMES; i++)
    {
        cout << names[i] << endl;
    }

    return 0;
}