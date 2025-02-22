/*  Hotel Occupancy
Write a program that calculates the occupancy rate for a hotel. The program should 
start by asking the user how many floors the hotel has. A loop should then iterate 
once for each floor. In each iteration, the loop should ask the user for the number of 
rooms on the floor and how many of them are occupied. After all the iterations, the 
program should display how many rooms the hotel has, how many of them are occupied, 
how many are unoccupied, and the percentage of rooms that are occupied. The 
percentage may be calculated by dividing the number of rooms occupied by the number of rooms.

NOTE: It is traditional that most hotels do not have a thirteenth floor. The loop in this 
program should skip the entire thirteenth iteration.

Input Validation: Do not accept a value less than 1 for the number of floors. Do not 
accept a number less than 10 for the number of rooms on a floor.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int floors, rooms, occupied, totalRooms = 0, totalOccupied = 0;

    cout << "How many floors does the hotel have? ";
    cin >> floors;

    while (floors < 1)
    {
        cout << "Please enter a positive integer: ";
        cin >> floors;
    }

    for (int i = 1; i <= floors; i++)
    {
        if (i == 13)
        {
            continue;
        }

        cout << "How many rooms are on floor " << i << "? ";
        cin >> rooms;

        while (rooms < 10)
        {
            cout << "Please enter a positive integer greater than 10: ";
            cin >> rooms;
        }

        cout << "How many of them are occupied? ";
        cin >> occupied;

        while (occupied < 0 || occupied > rooms)
        {
            cout << "Please enter a positive integer less than or equal to " << rooms << ": ";
            cin >> occupied;
        }

        totalRooms += rooms;
        totalOccupied += occupied;
    }

    cout << "Total rooms: " << totalRooms << endl;
    cout << "Total occupied: " << totalOccupied << endl;
    cout << "Total unoccupied: " << totalRooms - totalOccupied << endl;
    cout << "Occupancy rate: " << fixed << setprecision(2) << (double)totalOccupied / totalRooms * 100 << "%" << endl;

    return 0;
}