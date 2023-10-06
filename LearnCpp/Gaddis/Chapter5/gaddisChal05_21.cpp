/*  Random Number Guessing Game Enhancement
Enhance the program that you wrote for Programming Challenge 20 so it keeps a 
count of the number of guesses that the user makes. When the user correctly guesses 
the random number, the program should display the number of guesses.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
    int guess, number, count = 0;

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
        count++;
    }

    cout << "Congratulations! You guessed the number in " << count << " guesses." << endl;

    return 0;
}