/*  String Selection Sort
Modify the selectionSort function presented in this chapter so it searches an array 
of strings instead of an array of ints. Test the function with a driver program. Use 
Program 8-8 as a skeleton to complete.
*/

#include <iostream> 
#include <cstring>

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

    char startScan, minIndex;
    char minValue[SIZE];

    // Selection sort string array
    for (startScan = 0; startScan < (NUM_NAMES - 1); startScan++) {
        minIndex = startScan;
        strcpy(minValue, names[startScan]);

        for (int index = startScan + 1; index < NUM_NAMES; index++) {
            if (strcmp(names[index], minValue) < 0) {
                strcpy(minValue, names[index]);
                minIndex = index;
            }
        }

        // Swap the elements
        char temp[SIZE];
        strcpy(temp, names[startScan]);
        strcpy(names[startScan], names[minIndex]);
        strcpy(names[minIndex], temp);
    }

    // print sorted array
    for (int i = 0; i < NUM_NAMES; i++)
    {
        cout << names[i] << endl;
    }

    return 0;
}
