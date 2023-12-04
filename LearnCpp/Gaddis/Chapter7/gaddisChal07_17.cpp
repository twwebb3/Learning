/*  Tic-Tac-Toe Game
Write a program that allows two players to play a game of tic-tac-toe. Use a two-
dimensional char array with three rows and three columns as the game board. Each 
element of the array should be initialized with an asterisk (*). The program should run a 
loop that
• Displays the contents of the board array
• Allows playor 1 to select a location on the board for an X. The program should 
  ask the user to enter the row and column numbers.
• Allows player 2 to select a location on the board for an O. The program should 
  ask the user to enter the row and column number.
• Determines whether a player has won, or a tie has occurred. If a player has won, 
  the program should declare that player the winner and end. If a tie has occurred, 
  the program should say so and end
Player 1 wins when there are three Xs in a row on the game board. The Xs can appear 
in a row, in a column, or diagonally across the board. A tie occurs when all of the 
locations on the board are full, but there is no winner
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int ROWS = 3;
    const int COLS = 3;
    char board[ROWS][COLS] = { '*', '*', '*',
                               '*', '*', '*',
                               '*', '*', '*' };
    int row, col;
    bool gameOver = false;
    int player = 1;

    while (!gameOver)
    {
        cout << "Player " << player << ", enter a row and column: ";
        cin >> row >> col;

        while (row < 1 || row > 3 || col < 1 || col > 3)
        {
            cout << "Invalid row or column. Please enter a row and column: ";
            cin >> row >> col;
        }

        while (board[row - 1][col - 1] != '*')
        {
            cout << "That space is already taken. Please enter a row and column: ";
            cin >> row >> col;
        }

        if (player == 1)
        {
            board[row - 1][col - 1] = 'X';
            player = 2;
        }
        else
        {
            board[row - 1][col - 1] = 'O';
            player = 1;
        }

        cout << endl;

        for (int i = 0; i < ROWS; i++)
        {
            cout << setw(5);
            for (int j = 0; j < COLS; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }

        cout << endl;

        if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X')
        {
            cout << "Player 1 wins!" << endl;
            gameOver = true;
        }
        else if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X')
        {
            cout << "Player 1 wins!" << endl;
            gameOver = true;
        }
        else if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X')
        {
            cout << "Player 1 wins!" << endl;
            gameOver = true;
        }
        else if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X')
        {
            cout << "Player 1 wins!" << endl;
            gameOver = true;
        }
        else if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X')
        {
            cout << "Player 1 wins!" << endl;
            gameOver = true;
        }
        else if (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X')
        {
            cout << "Player 1 wins!" << endl;
            gameOver = true;
        }
        else if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X')
        {
            cout << "Player 1 wins!" << endl;
            gameOver = true;
        }
        else if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')
        {
            cout << "Player 1 wins!" << endl;
            gameOver = true;
        }
        else if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O')
        {
            cout << "Player 2 wins!" << endl;
            gameOver = true;
        }
        else if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O')
        {
            cout << "Player 2 wins!" << endl;
            gameOver = true;
        }
        else if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O')
        {
            cout << "Player 2 wins!" << endl;
            gameOver = true;
        }
        else if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O')
        {
            cout << "Player 2 wins!" << endl;
            gameOver = true;
        }
        else if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O')
        {
            cout << "Player 2 wins!" << endl;
            gameOver = true;
        }
        else if (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O')
        {
            cout << "Player 2 wins!" << endl;
            gameOver = true;
        }
        else if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O')
        {
            cout << "Player 2 wins!" << endl;
            gameOver = true;
        }
        else if (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O')
        {
            cout << "Player 2 wins!" << endl;
            gameOver = true;
        }
        else if (board[0][0] != '*' && board[0][1] != '*' && board[0][2] != '*' &&
                 board[1][0] != '*' && board[1][1] != '*' && board[1][2] != '*' &&
                 board[2][0] != '*' && board[2][1] != '*' && board[2][2] != '*')
        {
            cout << "Tie game!" << endl;
            gameOver = true;
        }
    }

    return 0;
}
