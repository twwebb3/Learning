/*  String Search
Write a program that asks the user for a file name and a string to search for. The 
program should search the file for every occurrence of a specified string. When the string 
is found, the line that contains it should be displayed. After all the occurrences have 
been located, the program should report the number of times the string appeared in 
the file.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string fileName;
    string searchString;
    string line;
    int lineCount = 0;
    int stringCount = 0;

    cout << "Enter the name of a file: ";
    cin >> fileName;
    cout << "Enter a string to search for: ";
    cin >> searchString;

    ifstream inputFile(fileName);

    if (inputFile)
    {
        while (getline(inputFile, line))
        {
            lineCount++;
            if (line.find(searchString) != string::npos)
            {
                cout << lineCount << ": " << line << endl;
                stringCount++;
            }
        }
        cout << "The string \"" << searchString << "\" was found " << stringCount << " times." << endl;
    }
    else
    {
        cout << "Error opening file." << endl;
    }

    inputFile.close();

    return 0;
}
