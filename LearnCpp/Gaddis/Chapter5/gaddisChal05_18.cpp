/*  Population Bar Chart
Write a program that produces a bar chart showing the population growth of Prairieville, 
a small town in the Midwest, at 20-year intervals during the past 100 years.
The program should read in the population figures (rounded to the nearest 1,000 
people) for 1900, 1920, 1940, 1960, 1980, and 2000 from a file. For each year it should 
display the date and a bar consisting of one asterisk for each 1,000 people. The data 
can be found in the people.dat file.

Here is an example of how the chart might begin:
PRAIRIEVILLE POPULATION GROWTH (each * represents 1,000 people)
1900 **
1920 ****
1940 *****
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inputFile;
    int population;

    inputFile.open("people.dat");

    cout << "PRAIRIEVILLE POPULATION GROWTH (each * represents 1,000 people)" << endl;

    for (int i = 1900; i <= 2000; i += 20)
    {
        inputFile >> population;
        cout << i << " ";
        for (int j = 0; j < population / 1000; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    inputFile.close();

    return 0;
}