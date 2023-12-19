/*  Test Scores #2
Modify the program of Programming Challenge 2 to allow the user to enter name-score 
pairs. For each student taking a test, the user types the student's name followed by the 
student's integer test score. Modify the sorting function so it takes an array holding the 
student names and an array holding the student test scores. When the sorted list of 
scores is displayed, each student's name should be displayed along with his or her score.
In stepping through the arrays, use pointers rather than array subscripts.
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


string *allocateNamesArray(int);
int *allocateArray(int, string *);
void sortArray(int *, string *, int);
double averageArray(int *, int);
void displayArray(int *, string *, int);

int main()
{
    int *array;
    string *names;
    int size;
    double average;

    cout << "How many test scores do you want to enter? ";
    cin >> size;

    names = allocateNamesArray(size);
    array = allocateArray(size, names);

    sortArray(array, names, size);

    average = averageArray(array, size);

    displayArray(array, names, size);

    cout << "The average score is " << average << endl;

    delete [] array;
    array = nullptr;

    return 0;
}

string *allocateNamesArray(int size)
{
    string *array = nullptr;

    cin.ignore();

    if (size <= 0)
    {
        return nullptr;
    }

    array = new string[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the name of student " << i + 1 << ": ";
        getline(cin, array[i]);
    }

    return array;
}

int *allocateArray(int size, string *names)
{
    int *array = nullptr;

    if (size <= 0)
    {
        return nullptr;
    }

    array = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter test score for " << names[i] << ": ";
        cin >> array[i];

        while (array[i] < 0)
        {
            cout << "Test scores cannot be negative. Please enter a positive number: ";
            cin >> array[i];
        }
    }

    return array;
}

void sortArray(int *array, string *names, int size)
{
    bool swap;
    int temp;
    string tempName;

    do
    {
        swap = false;

        for (int i = 0; i < size - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;

                tempName = names[i];
                names[i] = names[i + 1];
                names[i + 1] = tempName;

                swap = true;
            }
        }
    } while (swap);
}

double averageArray(int *array, int size)
{
    double total = 0;

    for (int i = 0; i < size; i++)
    {
        total += array[i];
    }

    return total / size;
}

void displayArray(int *array, string *names, int size)
{
    cout << "The test scores in ascending order are: " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << names[i] << ": " << array[i] << endl;
    }
}

