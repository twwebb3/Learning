/* Math Tutor
Write a program that can be used as a math tutor for a young student.
The program should display two random numbers that are to be added, such as:
   247
+  129
______

The program should wait for the student to enter the answer. If the answer is correct,
a message of congratulations should be printed. If the answer is incorrect, a message
should be printed showing the correct answer. 
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int num1, num2, answer, correctAnswer;

    num1 = rand() % 1000;
    num2 = rand() % 1000;

    cout << "   " << num1 << endl;
    cout << "+  " << num2 << endl;
    cout << "______" << endl;
    cout << "Enter the answer: ";
    cin >> answer;

    correctAnswer = num1 + num2;

    if (answer == correctAnswer)
        cout << "Congratulations!" << endl;
    else
        cout << "The correct answer is " << correctAnswer << endl;

    return 0;
}
