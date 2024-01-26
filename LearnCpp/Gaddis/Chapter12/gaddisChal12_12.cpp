/*  Corporate Sales Data Input
Write a program that reads the data in the file created by the program in Programming 
Challenge 11. The program should calculate and display the following figures:
• Total corporate sales for each quarter
• Total yearly sales for each division
• Total yearly corporate sales
• Average quarterly sales for the divisions
• The highest and lowest quarters for the corporation
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Division
{
    string name;
    int quarter;
    double sales;
};

int main()
{
    Division east;
    Division west;
    Division north;
    Division south;

    ifstream input("corporateSalesData.txt");

    if (input)
    {
        while (input >> east.name >> east.quarter >> east.sales)
        {
            input >> west.name >> west.quarter >> west.sales;
            input >> north.name >> north.quarter >> north.sales;
            input >> south.name >> south.quarter >> south.sales;
        }
    }
    else
    {
        cout << "Error opening file." << endl;
    }

    input.close();

    cout << "Division Name: " << east.name << endl;
    cout << "Quarter: " << east.quarter << endl;
    cout << "Quarterly Sales: " << east.sales << endl;

    cout << "Division Name: " << west.name << endl;
    cout << "Quarter: " << west.quarter << endl;
    cout << "Quarterly Sales: " << west.sales << endl;

    cout << "Division Name: " << north.name << endl;
    cout << "Quarter: " << north.quarter << endl;
    cout << "Quarterly Sales: " << north.sales << endl;

    cout << "Division Name: " << south.name << endl;
    cout << "Quarter: " << south.quarter << endl;
    cout << "Quarterly Sales: " << south.sales << endl;

    return 0;
}

