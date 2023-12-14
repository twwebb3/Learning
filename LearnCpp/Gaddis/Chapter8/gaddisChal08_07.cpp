/*  Binary String Search
Modify the binarySearch function presented in this chapter so it searches an array 
of strings instead of an array of ints. Test the function with a driver program. Use 
Program 8-8 as a skeleton to complete. (The array must be sorted before the binary 
search will work.)
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

    int first = 0,
        last = NUM_NAMES - 1,
        middle;

    bool found = false;

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

    // take input for name to search
    char name[SIZE];
    cout << "Enter a name to search for: ";
    cin.getline(name, SIZE);

    // Binary search string array
    while (!found && first <= last)
    {
        middle = (first + last) / 2;

        if (strcmp(names[middle], name) == 0)
        {
            found = true;
        }
        else if (strcmp(names[middle], name) > 0)
        {
            last = middle - 1;
        }
        else
        {
            first = middle + 1;
        }
    }

    if (found)
    {
        cout << "The name is valid." << endl;
    }
    else
    {
        cout << "The name is not valid." << endl;
    }

    return 0;
}
