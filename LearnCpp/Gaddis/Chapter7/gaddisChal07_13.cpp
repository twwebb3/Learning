/*  Grade Book
A teacher has five students who have taken four tests. The teacher uses the following 
grading scale to assign a letter grade to a student, based on the average of his or her 
four test scores.
Test Score      Letter Grade
90–100          A
80–89           B
70–79           C
60–69           D
0–59            F
Write a program that uses a two-dimensional array of characters to hold the five 
student names, a single dimensional array of five characters to hold the five students 
letter grades, and five parallel arrays of four elements each to hold each student's 
set of test scores.
The program should allow the user to enter each student's name and his or her four 
test scores. It should then calculate and display each student's average test score and a 
letter grade based on the average.
Input Validation: Do not accept test scores less than 0 or greater than 100.
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int STUDENTS = 5;
const int TESTS = 4;

void getNames(string[]);
void getScores(string[], int[][TESTS]);
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

void calcGrades(int scores[][TESTS], char grades[])
{
    for (int i = 0; i < STUDENTS; i++)
    {
        int total = 0;
        for (int j = 0; j < TESTS; j++)
        {
            total += scores[i][j];
        }
        int average = total / TESTS;

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