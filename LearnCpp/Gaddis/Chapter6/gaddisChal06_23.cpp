/*  Rock, Paper, Scissors Game
Write a program that lets the user play the game of Rock, Paper, Scissors against the 
computer. The program should work as follows.

1. When the program begins, a random number in the range of 1 through 3 is generated. 
   If the number is 1, then the computer has chosen rock. If the number is 2, 
   then the computer has chosen paper. If the number is 3, then the computer has 
   chosen scissors. (Don't display the computer's choice yet.)
2. The user enters his or her choice of "rock", "paper", or "scissors" at the 
   keyboard. (You can use a menu if you prefer.)
3. The computer's choice is displayed.
4. A winner is selected according to the following rules:
   • If one player chooses rock and the other player chooses scissors, then rock
     wins. (The rock smashes the scissors.)
   • If one player chooses scissors and the other player chooses paper, then 
     scissors wins. (Scissors cuts paper.)
   • If one player chooses paper and the other player chooses rock, then paper 
     wins. (Paper wraps rock.)
   • If both players make the same choice, the game must be played again to 
     determine the winner.
Be sure to divide the program into functions that perform each major task.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int getComputerChoice();
int getUserChoice();
void determineWinner(int, int);

int main()
{
    int computerChoice;
    int userChoice;

    do {
        computerChoice = getComputerChoice();
        userChoice = getUserChoice();
        determineWinner(computerChoice, userChoice);
    } while (computerChoice == userChoice);

    return 0;
}

int getComputerChoice()
{
    int choice;

    srand(time(0));

    choice = rand() % 3 + 1;

    return choice;
}

int getUserChoice()
{
    int choice;

    cout << "Enter your choice (1 = rock, 2 = paper, 3 = scissors): ";
    cin >> choice;

    while (choice < 1 || choice > 3)
    {
        cout << "Invalid choice. Please enter 1, 2, or 3: ";
        cin >> choice;
    }

    return choice;
}

void determineWinner(int computerChoice, int userChoice)
{
    string computer;
    string user;

    if (computerChoice == 1)
        computer = "rock";
    else if (computerChoice == 2)
        computer = "paper";
    else
        computer = "scissors";

    if (userChoice == 1)
        user = "rock";
    else if (userChoice == 2)
        user = "paper";
    else
        user = "scissors";

    cout << "Computer chose " << computer << endl;
    cout << "You chose " << user << endl;

    if (computerChoice == userChoice)
        cout << "It's a tie!" << endl;
    else if (computerChoice == 1 && userChoice == 2)
        cout << "You win!" << endl;
    else if (computerChoice == 1 && userChoice == 3)
        cout << "Computer wins!" << endl;
    else if (computerChoice == 2 && userChoice == 1)
        cout << "Computer wins!" << endl;
    else if (computerChoice == 2 && userChoice == 3)
        cout << "You win!" << endl;
    else if (computerChoice == 3 && userChoice == 1)
        cout << "You win!" << endl;
    else if (computerChoice == 3 && userChoice == 2)
        cout << "Computer wins!" << endl;
}