/*  Driver's License Exam
The local Driver's License Office has asked you to write a program that grades the 
written portion of the driver's license exam. The exam has 20 multiple choice questions. 
Here are the correct answers:

1. B  6. A  11. B  16. C
2. D  7. B  12. C  17. C
3. A  8. A  13. D  18. B
4. A  9. C  14. A  19. D
5. C  10. D 15. D  20. A

Your program should store the correct answers shown above in an array. It should ask 
the user to enter the student's answers for each of the 20 questions, and the answers 
should be stored in another array. After the student's answers have been entered, the 
program should display a message indicating whether the student passed or failed the 
exam. (A student must correctly answer 15 of the 20 questions to pass the exam.)
*/

#include <iostream>
#include <iomanip>

using namespace std;

const int SIZE = 20;

void getAnswers(char[]);
void checkAnswers(char[], char[]);
int correctAnswers(char[], char[]);
int incorrectAnswers(char[], char[]);
void displayResults(int, int);

int main()
{
    char correct[SIZE] = { 'B', 'D', 'A', 'A', 'C', 'A', 'B', 'A', 'C', 'D',
                           'B', 'C', 'D', 'A', 'D', 'C', 'C', 'B', 'D', 'A' };
    char student[SIZE];

    getAnswers(student);
    checkAnswers(correct, student);

    return 0;
}

void getAnswers(char student[])
{
    cout << "Enter the student's answers for each of the 20 questions: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Question " << (i + 1) << ": ";
        cin >> student[i];
    }
}

void checkAnswers(char correct[], char student[])
{
    int correctCount = 0;
    int incorrectCount = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (student[i] == correct[i])
        {
            correctCount++;
        }
        else
        {
            incorrectCount++;
        }
    }

    displayResults(correctCount, incorrectCount);
}

int correctAnswers(char correct[], char student[])
{
    int correctCount = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (student[i] == correct[i])
        {
            correctCount++;
        }
    }

    return correctCount;
}

int incorrectAnswers(char correct[], char student[])
{
    int incorrectCount = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (student[i] != correct[i])
        {
            incorrectCount++;
        }
    }

    return incorrectCount;
}

void displayResults(int correctCount, int incorrectCount)
{
    cout << "The student got " << correctCount << " answers correct and " << incorrectCount << " answers incorrect." << endl;

    if (correctCount >= 15)
    {
        cout << "The student passed the exam." << endl;
    }
    else
    {
        cout << "The student failed the exam." << endl;
    }
}