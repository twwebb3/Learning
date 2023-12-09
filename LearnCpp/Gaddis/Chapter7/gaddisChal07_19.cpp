/*  Theater Seating
This program should be designed and written by a team of students. Here are some 
suggestions:
• One student should design function main, which will call the other functions in 
  the program. The remainder of the functions will be designed by other members 
  of the team.
• The requirements of the program should be analyzed so each student is given 
  about the same work load.
• The parameters and return types of each function should be decided in advance
• The program can be implemented as a multi-file program, or all the functions can 
  be cut and pasted into the main file.
Here is the assignment: Write a program that can be used by a small theater to sell 
tickets for performances. The theater's auditorium has 15 rows of seats, with 30 seats 
in each row. The program should display a screen that shows which seats are available 
and which are taken. For example, the following screen shows a chart depicting
each seat in the theater. Seats that are taken are represented by an * symbol, and seats 
that are available are represented by a # symbol:
Seats
123456789012345678901234567890
Row 1 ******###*########*****##
Row 2 ############*************
Row 3 **###########************
Row 4 *************############
Row 5 ##############***********
Row 6 ************#############
Row 7 #############************
Row 8 **************############
Row 9 #############************
Row 10 ************############
Row 11 ############************
Row 12 ************############
Row 13 ############************
Row 14 ************############
Row 15 ############************

Here is a list of tasks this program must perform:
• When the program begins, it should ask the user to enter the seat prices 
  for each row. The prices can be stored in a separate array. (Alternatively, the prices may 
  be read from a file.)
• Once the prices are entered, the program should display a seating chart similar to 
  the one shown above. The user may enter the row and seat numbers for tickets 
  being sold. Every time a ticket or group of tickets is purchased, the program 
  should display the total ticket prices and update the seating chart.
• The program should keep a total of all ticket sales. The user should be given an 
  option of viewing this amount.
• The program should also give the user an option to see a list of how many seats 
  have been sold, how many seats are available in each row, and how many seats 
  are available in the entire auditorium.

Input Validation: When tickets are being sold, do not accept row or seat numbers that 
do not exist. When someone requests a particular seat, the program should make sure 
that seat is available before it is sold.
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

const int ROWS = 15;
const int SEATS = 30;

void displayMenu();
// function to gather seat prices from user and store in array
void getSeatPrices(double[]);
// function to display seating chart
void displaySeatingChart(char[][SEATS], double[]);
// function to sell tickets
void sellTickets(char[][SEATS], double[], double&);
// function to display total ticket sales
void displayTotalSales(double);
// function to display number of seats sold, available in each row, and available in entire auditorium
void displaySeatInfo(char[][SEATS]);


int main()
{
    char seatingChart[ROWS][SEATS];
    double seatPrices[ROWS];
    double totalSales = 0.0;
    int choice;

    // initialize seating chart
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < SEATS; j++)
        {
            seatingChart[i][j] = '#';
        }
    }

    getSeatPrices(seatPrices);

    do
    {
        displayMenu();
        cin >> choice;

        while (choice < 1 || choice > 4)
        {
            cout << "Invalid choice. Please enter 1, 2, 3, or 4: ";
            cin >> choice;
        }

        switch (choice)
        {
        case 1:
            displaySeatingChart(seatingChart, seatPrices);
            break;
        case 2:
            sellTickets(seatingChart, seatPrices, totalSales);
            break;
        case 3:
            displayTotalSales(totalSales);
            break;
        case 4:
            displaySeatInfo(seatingChart);
            break;
        }

    } while (choice != 4);

    return 0;
}

void displayMenu()
{
    cout << "1. Display seating chart" << endl;
    cout << "2. Sell tickets" << endl;
    cout << "3. Display total ticket sales" << endl;
    cout << "4. Display seat information" << endl;
    cout << "Enter your choice: ";
}

void getSeatPrices(double seatPrices[])
{
    ifstream inputFile;
    string fileName;

    cout << "Enter the name of the file containing the seat prices: ";
    cin >> fileName;

    inputFile.open(fileName);

    while (!inputFile)
    {
        cout << "Error opening file. Please enter a valid file name: ";
        cin >> fileName;
        inputFile.open(fileName);
    }

    for (int i = 0; i < ROWS; i++)
    {
        inputFile >> seatPrices[i];
    }

    inputFile.close();
}

void displaySeatingChart(char seatingChart[][SEATS], double seatPrices[])
{
    cout << "Seats" << endl;
    cout << "123456789012345678901234567890" << endl;
    for (int i = 0; i < ROWS; i++)
    {
        cout << "Row " << (i + 1) << " ";
        for (int j = 0; j < SEATS; j++)
        {
            cout << seatingChart[i][j];
        }
        cout << endl;
    }
}

void sellTickets(char seatingChart[][SEATS], double seatPrices[], double& totalSales)
{
    int row;
    int seat;
    int numTickets;
    double totalTicketPrice = 0.0;

    cout << "Enter the row number: ";
    cin >> row;

    while (row < 1 || row > ROWS)
    {
        cout << "Invalid row number. Please enter a valid row number: ";
        cin >> row;
    }

    cout << "Enter the seat number: ";
    cin >> seat;

    while (seat < 1 || seat > SEATS)
    {
        cout << "Invalid seat number. Please enter a valid seat number: ";
        cin >> seat;
    }

    cout << "Enter the number of tickets: ";
    cin >> numTickets;

    while (numTickets < 1 || numTickets > (SEATS - seat + 1))
    {
        cout << "Invalid number of tickets. Please enter a valid number of tickets: ";
        cin >> numTickets;
    }

    for (int i = 0; i < numTickets; i++)
    {
        seatingChart[row - 1][seat - 1 + i] = '*';
        totalTicketPrice += seatPrices[row - 1];
    }

    totalSales += totalTicketPrice;

    cout << "The total ticket price is: $" << fixed << setprecision(2) << totalTicketPrice << endl;
}

void displayTotalSales(double totalSales)
{
    cout << "The total ticket sales are: $" << fixed << setprecision(2) << totalSales << endl;
}

void displaySeatInfo(char seatingChart[][SEATS])
{
    int seatsSold = 0;
    int seatsAvailable = 0;
    int seatsAvailableInRow = 0;

    for (int i = 0; i < ROWS; i++)
    {
        seatsAvailableInRow = 0;
        for (int j = 0; j < SEATS; j++)
        {
            if (seatingChart[i][j] == '*')
            {
                seatsSold++;
            }
            else
            {
                seatsAvailable++;
                seatsAvailableInRow++;
            }
        }
        cout << "There are " << seatsAvailableInRow << " seats available in row " << (i + 1) << endl;
    }

    cout << "There are " << seatsSold << " seats sold." << endl;
    cout << "There are " << seatsAvailable << " seats available." << endl;
}
