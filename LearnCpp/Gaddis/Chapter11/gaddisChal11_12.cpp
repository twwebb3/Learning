/*  Course Grade
Write a program that uses a structure to store the following data:
Member Name Description
Name Student name
IDNumber Student ID Number
TestScores Pointer to an array of test scores
Average The average test score
CourseGrade The course grade

The program should keep a list of test scores for a group of students. It should ask the 
user how many test scores there are to be and how many students there are. It should 
then dynamically allocate an array of structures. Each structure's rests member 
should point to a dynamically allocated array that will hold the test scores.

After the arrays have been dynamically allocated, the program should ask for the ID 
number and all the test scores for each student. The average test score should be 
calculated and stored in the average member of each structure. The course grade should 
be computed on the basis of the following grading scale: 
Average Test Score Course Grade
90-100 A
80-89 B
70-79 C
60-69 D
Below 60 F
The course grade should then be stored in the Grade member of each structure. Once 
all this data is calculated, a table should be displayed on the screen listing each 
student's name, ID number, average test score, and course grade.
Input Validation: Be sure all the data for each student is entered. Do not accept negative 
numbers for any test score.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct StudentData
{
    string name;
    int idNumber;
    int *testScores;
    double average;
    char grade;
};

void displayStudent(StudentData);

int main()
{
    int numberOfStudents = 0;
    int numberOfTests = 0;

    cout << "Enter the number of students: ";
    cin >> numberOfStudents;
    cout << "Enter the number of tests: ";
    cin >> numberOfTests;

    StudentData *students = new StudentData[numberOfStudents];

    for (int i = 0; i < numberOfStudents; i++)
    {
        students[i].testScores = new int[numberOfTests];
    }

    for (int i = 0; i < numberOfStudents; i++)
    {
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> students[i].name;
        cout << "Enter the ID number of student " << i + 1 << ": ";
        cin >> students[i].idNumber;
        for (int j = 0; j < numberOfTests; j++)
        {
            cout << "Enter the test score for test " << j + 1 << ": ";
            cin >> students[i].testScores[j];
        }
        double total = 0;
        for (int j = 0; j < numberOfTests; j++)
        {
            total += students[i].testScores[j];
        }
        students[i].average = total / numberOfTests;
        if (students[i].average >= 90)
        {
            students[i].grade = 'A';
        }
        else if (students[i].average >= 80)
        {
            students[i].grade = 'B';
        }
        else if (students[i].average >= 70)
        {
            students[i].grade = 'C';
        }
        else if (students[i].average >= 60)
        {
            students[i].grade = 'D';
        }
        else
        {
            students[i].grade = 'F';
        }
    }

    for (int i = 0; i < numberOfStudents; i++)
    {
        displayStudent(students[i]);
    }

    return 0;
}

void displayStudent(StudentData student)
{
    cout << "Name: " << student.name << endl;
    cout << "ID Number: " << student.idNumber << endl;
    cout << "Average: " << student.average << endl;
    cout << "Grade: " << student.grade << endl;
}
