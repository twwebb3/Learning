/*  File Decryption Filter
Write a program that decrypts the file produced by the program in Programming 
Challenge 9. The decryption program should read the contents of the coded file, 
restore the data to its original state, and write it to another file.
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
                line[i] -= 10;
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