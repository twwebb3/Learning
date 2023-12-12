/*  Lottery Winners Modification
Modify the program you wrote for Programming Challenge 2 (Lottery Winners) so it 
performs a binary search instead of a linear
*/

#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 10;
    int luckyNum[SIZE] = {13579, 26791, 26792, 33445, 55555,
                          62483, 77777, 79422, 85647, 93121};
    int userNum;
    bool found = false;
    int first = 0,
        last = SIZE - 1,
        middle;
    
    cout << "Enter this week's winning 5-digit number: ";
    cin >> userNum;
    
    // Binary search
    while (!found && first <= last)
    {
        middle = (first + last) / 2;
        
        if (luckyNum[middle] == userNum)
        {
            found = true;
        }
        else if (luckyNum[middle] > userNum)
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
        cout << "You have a winning ticket!" << endl;
    }
    else
    {
        cout << "You do not have a winning ticket." << endl;
    }
    
    return 0;
}