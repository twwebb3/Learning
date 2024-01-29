/*  Average Number of Words
On the student CD you will find a file named text. txt. The text that is in the file is 
stored as one sentence per line. Write a program that reads the file's contents and 
calculates the average number of words per sentence.
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string line;
    int lineCount = 0;
    int wordCount = 0;
    double average = 0.0;

    ifstream input("text.txt");

    if (input)
    {
        while (getline(input, line))
        {
            lineCount++;
            for (int i = 0; i < line.length(); i++)
            {
                if (line[i] == ' ')
                {
                    wordCount++;
                }
            }
        }
    }
    else
    {
        cout << "Error opening file." << endl;
    }

    input.close();

    average = static_cast<double>(wordCount) / lineCount;

    cout << "Average number of words per sentence: " << average << endl;

    return 0;
}