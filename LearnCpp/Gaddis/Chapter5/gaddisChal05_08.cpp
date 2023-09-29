/*  Math Tutor
This program started in Programming Challenge 15 of Chapter 3, and was modified 
in Programming Challenge 9 of Chapter 4. Modify the program again so it displays a 
menu allowing the user to select an addition, subtraction, multiplication, or division 
problem. The final selection on the menu should let the user quit the program. After 
the user has finished the math problem, the program should display the menu again.
This process is repeated until the user chooses to quit the program.

Input Validation: If the user selects an iter not on the menu, display an error message 
and display the menu again.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int choice, num1, num2, answer, userAnswer;
    unsigned seed = time(0);
    srand(seed);

    cout << "Math Tutor" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Quit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    while (choice < 1 || choice > 5)
    {
        cout << "Please enter a number between 1 and 5: ";
        cin >> choice;
    }

    while (choice != 5)
    {
        num1 = rand() % 100;
        num2 = rand() % 100;

        switch (choice)
        {
            case 1:
                answer = num1 + num2;
                cout << num1 << " + " << num2 << " = ";
                cin >> userAnswer;

                if (userAnswer == answer)
                {
                    cout << "Congratulations! That is correct." << endl;
                }
                else
                {
                    cout << "Sorry, that is incorrect. The correct answer is " << answer << endl;
                }
                break;
            case 2:
                answer = num1 - num2;
                cout << num1 << " - " << num2 << " = ";
                cin >> userAnswer;

                if (userAnswer == answer)
                {
                    cout << "Congratulations! That is correct." << endl;
                }
                else
                {
                    cout << "Sorry, that is incorrect. The correct answer is " << answer << endl;
                }
                break;
            case 3:
                answer = num1 * num2;
                cout << num1 << " * " << num2 << " = ";
                cin >> userAnswer;

                if (userAnswer == answer)
                {
                    cout << "Congratulations! That is correct." << endl;
                }
                else
                {
                    cout << "Sorry, that is incorrect. The correct answer is " << answer << endl;
                }
                break;
            case 4:
                answer = num1 / num2;
                cout << num1 << " / " << num2 << " = ";
                cin >> userAnswer;

                if (userAnswer == answer)
                {
                    cout << "Congratulations! That is correct." << endl;
                }
                else
                {
                    cout << "Sorry, that is incorrect. The correct answer is " << answer << endl;
                }
                break;
        }

        cout << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Quit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;
    }
}
