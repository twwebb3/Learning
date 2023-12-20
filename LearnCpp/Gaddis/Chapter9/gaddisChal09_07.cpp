/*  Case Study Modification #2
Modify Program 9-17 (the United Cause case study program) so the arrptr array is 
sorted in descending order instead of ascending order.
*/

#include <iostream>
#include <iomanip>

using namespace std;

void arrSelectSort(int *[], int);
void showArray(const int [], int);
void showArrPtr(int *[], int);

int main()
{
    int numDonations;

    cout << "How many donations were made? ";
    cin >> numDonations;

    int *donations = new int[numDonations];

    for (int i = 0; i < numDonations; i++)
    {
        cout << "Enter donation #" << i + 1 << ": ";
        cin >> donations[i];
    }

    int **arrPtr = new int*[numDonations];

    for (int i = 0; i < numDonations; i++)
    {
        arrPtr[i] = &donations[i];
    }

    arrSelectSort(arrPtr, numDonations);

    cout << "The donations, sorted in descending order, are: \n";
    showArrPtr(arrPtr, numDonations);

    cout << "The donations, in their original order, are: \n";
    showArray(donations, numDonations);

    delete [] donations;
    donations = nullptr;

    delete [] arrPtr;
    arrPtr = nullptr;

    return 0;
}

void arrSelectSort(int *arr[], int size)
{
    int startScan, minIndex;
    int *minElem;

    for (startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minElem = arr[startScan];

        for (int index = startScan + 1; index < size; index++)
        {
            if (*(arr[index]) > *minElem)
            {
                minElem = arr[index];
                minIndex = index;
            }
        }

        arr[minIndex] = arr[startScan];
        arr[startScan] = minElem;
    }
}

void showArray(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void showArrPtr(int *arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr[i]) << " ";
    }

    cout << endl;
}