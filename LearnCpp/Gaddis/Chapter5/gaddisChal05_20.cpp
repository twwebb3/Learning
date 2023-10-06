/*  Random Number Guessing Game
Write a program that generates a random number and asks the user to guess what the 
number is. If the user's guess is higher than the random number, the program should 
display "Too high, try again." If the user's guess is lower than the random number, the 
program should display "Too low, try again." The program should use a loop that 
repeats until the user correctly guesses the random number.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
    int guess, number;

    // get the system time
    unsigned seed = time(0);

    // seed the random number generator
    srand(seed);

    // generate a random number between 1 and 100
    number = rand() % 100 + 1;

    cout << "I'm thinking of a number between 1 and 100. Guess what it is: ";
    cin >> guess;

    while (guess != number)
    {
        if (guess > number)
            cout << "Too high, try again: ";
        else
            cout << "Too low, try again: ";

        cin >> guess;
    }

    cout << "Congratulations! You guessed the number." << endl;

    return 0;
}
