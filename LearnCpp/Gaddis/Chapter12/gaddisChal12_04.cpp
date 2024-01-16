/*  Tail Program
Write a program that asks the user for the name of a file. The program should display 
the last 10 lines of the file on the screen the "tail" of the file). If the file has fewer than 
10 lines, the entire file should be displayed, with a message indicating the entire file 
has been displayed.
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string fileName;
    string line;
    int lineCount = 0;
    vector<string> lines;

    cout << "Enter the name of a file: ";
    cin >> fileName;

    ifstream inputFile(fileName);

    if (inputFile)
    {
        while (getline(inputFile, line))
        {
            lines.push_back(line);
            lineCount++;
        }
        if (lineCount < 10)
        {
            cout << "The entire file has been displayed." << endl;
            for (int i = 0; i < lines.size(); i++)
            {
                cout << lines[i] << endl;
            }
        }
        else
        {
            for (int i = lineCount - 10; i < lines.size(); i++)
            {
                cout << lines[i] << endl;
            }
        }
    }
    else
    {
        cout << "Error opening file." << endl;
    }

    inputFile.close();

    return 0;
}