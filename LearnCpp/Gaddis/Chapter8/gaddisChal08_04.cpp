/*  Charge Account Validation Modification
Modify the program you wrote for Problem 1 (Charge Account Validation) so it performs 
a binary search to locate valid account numbers. Use the selection sort algorithm 
to sort the array before the binary search is performed.
*/

#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 18;
    int startScan, minIndex, minValue;
    int first = 0,
        last = SIZE - 1,
        middle;
    int chargeNum[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277,
                           1302850, 8080152, 4562555, 5552012, 5050552,
                           7825877, 1250255, 1005231, 6545231, 3852085,
                           7576651, 7881200, 4581002};
    int userNum;
    bool found = false;
    
    cout << "Enter a charge account number: ";
    cin >> userNum;
    
    // Selection sort
    for (startScan = 0; startScan < (SIZE - 1); startScan++)
    {
        minIndex = startScan;
        minValue = chargeNum[startScan];
        
        for (int index = startScan + 1; index < SIZE; index++)
        {
            if (chargeNum[index] < minValue)
            {
                minValue = chargeNum[index];
                minIndex = index;
            }
        }
        
        chargeNum[minIndex] = chargeNum[startScan];
        chargeNum[startScan] = minValue;
    }

    // Binary search
    while (!found && first <= last)
    {
        middle = (first + last) / 2;
        
        if (chargeNum[middle] == userNum)
        {
            found = true;
        }
        else if (chargeNum[middle] > userNum)
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
        cout << "The number is valid." << endl;
    }
    else
    {
        cout << "The number is invalid." << endl;
    }
    
    return 0;
}