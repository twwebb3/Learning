/*  File Head Program
Write a program that asks the user for the name of a file. The program should display 
the first 10 lines of the file on the screen (the "head" of the file). If the file has fewer 
than 10 lines, the entire file should be displayed, with a message indicating the entire 
file has been displayed.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string fileName;
    string line;
    int lineCount = 0;

    cout << "Enter the name of a file: ";
    cin >> fileName;

    ifstream inputFile(fileName);

    if (inputFile)
    {
        while (getline(inputFile, line) && lineCount < 10)
        {
            cout << line << endl;
            lineCount++;
        }
        if (lineCount < 10)
        {
            cout << "The entire file has been displayed." << endl;
        }
    }
    else
    {
        cout << "Error opening file." << endl;
    }

    inputFile.close();

    return 0;
}
