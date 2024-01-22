/*  Array/File Functions
Write a function named arrayToFile. The function should accept three arguments: 
the name of a file, a pointer to an int array, and the size of the array. The function 
should open the specified file in binary mode, write the contents of the array to the 
file, and then close the file.

Write another function named fileToArray. This function should accept three argu-
ments: the name of a file, a pointer to an int array, and the size of the array. The
function should open the specified file in binary mode, read its contents into the array, 
and then close the file.

Write a complete program that demonstrates these functions by using the arrayoFile 
function to write an array to a file, and then using the fileToArray function to read 
the data from the same file. After the data are read from the file into the array, display 
the array's contents on the screen.
*/

#include <iostream>
#include <fstream>

using namespace std;

void arrayToFile(string, int*, int);
void fileToArray(string, int*, int);

int main()
{
    const int SIZE = 10;
    int numbers[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8 ,9, 10 };
    int numbersFromFile[SIZE];

    arrayToFile("numbers.dat", numbers, SIZE);
    fileToArray("numbers.dat", numbersFromFile, SIZE);

    for (int i = 0; i < SIZE; i++)
    {
        cout << numbersFromFile[i] << endl;
    }

    return 0;
}

void arrayToFile(string fileName, int* array, int size)
{
    ofstream outputFile(fileName, ios::binary);

    if (outputFile)
    {
        outputFile.write(reinterpret_cast<char*>(array), size * sizeof(int));
    }
    else
    {
        cout << "Error opening file." << endl;
    }

    outputFile.close();
}

void fileToArray(string fileName, int* array, int size)
{
    ifstream inputFile(fileName, ios::binary);

    if (inputFile)
    {
        inputFile.read(reinterpret_cast<char*>(array), size * sizeof(int));
    }
    else
    {
        cout << "Error opening file." << endl;
    }

    inputFile.close();
}
