/*  2D Array Operations
Write a program that creates a two-dimensional array initialized with test data. Use 
any data type you wish. The program should have the following functions:
• getIotal. This function should accept a two-dimensional array as its argument 
  and return the total of all the values in the array.
• getAverage. This function should accept a two-dimensional array as its argument 
  and return the average of all the values in the array.
• getRowTotal. This function should accept a two-dimensional array as its first 
  argument and an integer as its second argument. The second argument should be 
  the subscript of a row in the array. The function should return the total of the 
  values in the specified row.
• getColumnTotal. This function should accept a two-dimensional array as its 
  first argument and an integer as its second argument. The second argument 
  should be the subscript of a column in the array. The function should return the total of the 
  values in the specified column.
• getHighestInRow. This function should accept a two-dimensional array as its 
  first argument and an integer as its second argument. The second argument 
  should be the subscript of a row in the array. The function should return the 
  highest value in the specified row of the array.
• getLowestInRow. This function should accept a two-dimensional array as its first 
  argument and an integer as its second argument. The second argument should be 
  the subscript of a row in the array. The function should return the lowest value in 
  the specified row of the array.
Demonstrate each of the functions in this program.
*/

#include <iostream>
#include <iomanip> 

using namespace std;

const int ROWS = 3;
const int COLS = 4;

void getValues(int[][COLS], int);
int getTotal(int[][COLS], int);
double getAverage(int[][COLS], int);
int getRowTotal(int[][COLS], int, int);
int getColumnTotal(int[][COLS], int, int);
int getHighestInRow(int[][COLS], int, int);
int getLowestInRow(int[][COLS], int, int);

int main()
{
    int numbers[ROWS][COLS];

    getValues(numbers, ROWS);

    cout << "The total of all the values in the array is: " << getTotal(numbers, ROWS) << endl;
    cout << "The average of all the values in the array is: " << getAverage(numbers, ROWS) << endl;

    for (int i = 0; i < ROWS; i++)
    {
        cout << "The total of row " << (i + 1) << " is: " << getRowTotal(numbers, COLS, i) << endl;
    }

    for (int i = 0; i < COLS; i++)
    {
        cout << "The total of column " << (i + 1) << " is: " << getColumnTotal(numbers, ROWS, i) << endl;
    }

    for (int i = 0; i < ROWS; i++)
    {
        cout << "The highest value in row " << (i + 1) << " is: " << getHighestInRow(numbers, COLS, i) << endl;
    }

    for (int i = 0; i < ROWS; i++)
    {
        cout << "The lowest value in row " << (i + 1) << " is: " << getLowestInRow(numbers, COLS, i) << endl;
    }

    return 0;
}

void getValues(int numbers[][COLS], int rows)
{
    cout << "Enter " << (rows * COLS) << " numbers: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            cin >> numbers[i][j];
        }
    }
}

int getTotal(int numbers[][COLS], int rows)
{
    int total = 0;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            total += numbers[i][j];
        }
    }

    return total;
}

double getAverage(int numbers[][COLS], int rows)
{
    double total = 0;
    double average;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            total += numbers[i][j];
        }
    }

    average = total / (rows * COLS);

    return average;
}

int getRowTotal(int numbers[][COLS], int cols, int row)
{
    int total = 0;

    for (int i = 0; i < cols; i++)
    {
        total += numbers[row][i];
    }

    return total;
}

int getColumnTotal(int numbers[][COLS], int rows, int col)
{
    int total = 0;

    for (int i = 0; i < rows; i++)
    {
        total += numbers[i][col];
    }

    return total;
}

int getHighestInRow(int numbers[][COLS], int cols, int row)
{
    int highest = numbers[row][0];

    for (int i = 0; i < cols; i++)
    {
        if (numbers[row][i] > highest)
        {
            highest = numbers[row][i];
        }
    }

    return highest;
}

int getLowestInRow(int numbers[][COLS], int cols, int row)
{
    int lowest = numbers[row][0];

    for (int i = 0; i < cols; i++)
    {
        if (numbers[row][i] < lowest)
        {
            lowest = numbers[row][i];
        }
    }

    return lowest;
}