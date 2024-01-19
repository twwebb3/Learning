/*  Sentence Filter
Write a program that asks the user for two file names. The first file will be opened for 
input and the second file will be opened for output. (It will be assumed that the first file 
contains sentences that end with a period.) The program will read the contents of the first 
file and change all the letters to lowercase except the first letter of each sentence, which 
should be made uppercase. The revised contents should be stored in the second file.
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
                if (i == 0)
                {
                    line[i] = toupper(line[i]);
                }
                else
                {
                    line[i] = tolower(line[i]);
                }
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