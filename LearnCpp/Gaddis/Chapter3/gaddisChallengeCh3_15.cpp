/*  Math Tutor
Write a program that can be used as a math tutor for
a young student. The program should display two
random numbers to be added, such as

  247
+ 129
_____

The program should then pause while the student works
on the problem. When the student is ready to check
the answer, he or she can press a key and the
program will display the correct solution:

  247
+ 129
_____
  376
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    // Set the random number seed
    srand(time(0));

    // Generate two random numbers
    int num1 = rand() % 1000;
    int num2 = rand() % 1000;

    // Display the problem
    cout << num1 << endl;
    cout << "+" << num2 << endl;
    cout << "_____" << endl;

    // Pause the program
    cout << "Press any key to continue...";
    cin.get();

    // Display the solution
    cout << num1 << endl;
    cout << "+" << num2 << endl;
    cout << "_____" << endl;
    cout << num1 + num2 << endl;

    return 0;
}
