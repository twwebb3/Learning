/*  Grade Book Modification
Modify the grade book application in Programming Challenge 13 so it drops each 
student's lowest score when determining the test score averages and letter
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int STUDENTS = 5;
const int TESTS = 4;

void getNames(string[]);
void getScores(string[], int[][TESTS]);
void dropLowest(int[][TESTS]);
void calcGrades(int[][TESTS], char[]);
void displayGrades(string[], char[]);
void displayAverage(int[][TESTS]);

int main()
{
    string names[STUDENTS];
    int scores[STUDENTS][TESTS];
    char grades[STUDENTS];

    getNames(names);
    getScores(names, scores);
    dropLowest(scores);
    calcGrades(scores, grades);
    displayGrades(names, grades);
    displayAverage(scores);

    return 0;
}

void getNames(string names[])
{
    cout << "Enter the names of the students: " << endl;
    for (int i = 0; i < STUDENTS; i++)
    {
        cout << "Student " << (i + 1) << ": ";
        getline(cin, names[i]);
    }
}

void getScores(string names[], int scores[][TESTS])
{
    cout << "Enter the test scores for each student: " << endl;
    for (int i = 0; i < STUDENTS; i++)
    {
        cout << "Student " << names[i] << endl;
        for (int j = 0; j < TESTS; j++)
        {
            cout << "Test " << (j + 1) << ": ";
            cin >> scores[i][j];

            while (scores[i][j] < 0 || scores[i][j] > 100)
            {
                cout << "Test scores must be between 0 and 100. Please enter a valid score: ";
                cin >> scores[i][j];
            }
        }
        cin.ignore();
    }
}

void dropLowest(int scores[][TESTS])
{
    for (int i = 0; i < STUDENTS; i++)
    {
        int lowest = scores[i][0];
        int lowestIndex = 0;
        for (int j = 0; j < TESTS; j++)
        {
            if (scores[i][j] < lowest)
            {
                lowest = scores[i][j];
                lowestIndex = j;
            }
        }
        scores[i][lowestIndex] = -1;
    }
}

void calcGrades(int scores[][TESTS], char grades[])
{
    for (int i = 0; i < STUDENTS; i++)
    {
        int total = 0;
        for (int j = 0; j < TESTS; j++)
        {
            if (scores[i][j] == -1)
            {
                continue;
            } else 
            {
                total += scores[i][j];
            }
        }
        int average = total / (TESTS-1);

        if (average >= 90)
        {
            grades[i] = 'A';
        }
        else if (average >= 80)
        {
            grades[i] = 'B';
        }
        else if (average >= 70)
        {
            grades[i] = 'C';
        }
        else if (average >= 60)
        {
            grades[i] = 'D';
        }
        else
        {
            grades[i] = 'F';
        }
    }
}

void displayGrades(string names[], char grades[])
{
    cout << "The grades for each student are: " << endl;
    for (int i = 0; i < STUDENTS; i++)
    {
        cout << names[i] << ": " << grades[i] << endl;
    }
}

void displayAverage(int scores[][TESTS])
{
    cout << "The average score for each test is: " << endl;
    for (int i = 0; i < TESTS; i++)
    {
        int total = 0;
        for (int j = 0; j < STUDENTS; j++)
        {
            total += scores[j][i];
        }
        int average = total / STUDENTS;
        cout << "Test " << (i + 1) << ": " << average << endl;
    }
}
