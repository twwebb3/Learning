/*  Soccer Scores
Write a program that stores the following data about a soccer player in a structure:
Player's Name
Player's Number
Points Scored by Player

The program should keep an array of 12 of these structures. Each element is for a dif 
ferent player on a team. When the program runs it should ask the user to enter the 
data for each player. It should then show a table that lists each player's number, name, 
and paints scored. The program should also calculate and display the total points earned by 
the team. The number and name of the player who has earned the most 
points should also be displayed.

Input Validation: Do not accept negative values for players numbers or points scored.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct PlayerData
{
    string name;
    int number;
    int pointsScored;
};

void displayPlayer(PlayerData);

int main()
{
    PlayerData player1 = {"Lionel Messi", 10, 0};
    PlayerData player2 = {"Cristiano Ronaldo", 7, 0};
    PlayerData player3 = {"Neymar", 10, 0};
    PlayerData player4 = {"Kylian Mbappe", 7, 0};
    PlayerData player5 = {"Mohamed Salah", 11, 0};
    PlayerData player6 = {"Eden Hazard", 10, 0};
    PlayerData player7 = {"Luka Modric", 10, 0};
    PlayerData player8 = {"Harry Kane", 9, 0};
    PlayerData player9 = {"Kevin De Bruyne", 17, 0};
    PlayerData player10 = {"Sergio Aguero", 10, 0};
    PlayerData player11 = {"Luis Suarez", 9, 0};
    PlayerData player12 = {"Paul Pogba", 6, 0};

    PlayerData team[12] = {player1, player2, player3, player4, player5, player6, player7, player8, player9, player10, player11, player12};

    for (int i = 0; i < 12; i++)
    {
        cout << "Enter the number of points scored by " << team[i].name << ": ";
        cin >> team[i].pointsScored;
    }

    int totalPoints = 0;
    int highestPoints = team[0].pointsScored;
    int highestPointsPlayer = 0;

    for (int i = 0; i < 12; i++)
    {
        totalPoints += team[i].pointsScored;
        if (team[i].pointsScored > highestPoints)
        {
            highestPoints = team[i].pointsScored;
            highestPointsPlayer = i;
        }
    }

    cout << endl;
    cout << "Player\t\tNumber\t\tPoints Scored" << endl;
    cout << "---------------------------------------------" << endl;
    for (int i = 0; i < 12; i++)
    {
        displayPlayer(team[i]);
    }
    cout << endl;
    cout << "Total Points Scored: " << totalPoints << endl;
    cout << "Highest Points Scored: " << highestPoints <<
    " by " << team[highestPointsPlayer].name << endl;

    return 0;
}

void displayPlayer(PlayerData player)
{
    cout << setw(20) << left << player.name;
    cout << setw(10) << left << player.number;
    cout << setw(10) << left << player.pointsScored;
    cout << endl;
}

