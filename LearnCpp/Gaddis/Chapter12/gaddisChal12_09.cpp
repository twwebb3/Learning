/*  File Encryption Filter
File encryption is the science of writing the contents of a file in a secret code. Your 
encryption program should work like a filter, reading the contents of one file, modifying 
the data into a code, and then writing the coded contents out to a second file. The 
second file will be a version of the first file, but written in a secret code.

Although there are complex encryption techniques, you should come up with a simple 
one of your own. For example, you could read the first file one character at a time, 
and add 10 to the ASCII code of each character before it is written to the second file.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string inputFile;
    string outputFile;
    string line;
    int lineCount = 0;

    cout << "Enter the name of the input file: ";
    cin >> inputFile;
    cout << "Enter the name of the output file: ";
    cin >> outputFile;

    ifstream input(inputFile);
    ofstream output(outputFile);

    if (input)
    {
        while (getline(input, line))
        {
            lineCount++;
            for (int i = 0; i < line.length(); i++)
            {
                line[i] += 10;
            }
            output << line << endl;
        }
    }
    else
    {
        cout << "Error opening file." << endl;
    }

    input.close();
    output.close();

    return 0;
}