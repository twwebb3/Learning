/*  Monkey Business
A local zoo wants to keep track of how many pounds of food each of its three 
monkeys eats each day during a typical week. Write a program that stores this information 
in a two-dimensional 3 x 7 array, where each row represents a different monkey and 
each column represents a different day of the week. The program should first have the 
user input the data for each monkey. Then it should create a report that includes the 
following information:

• Average amount of food eaten per day by the whole family of monkeys.
• The least amount of food eaten during the week by any one monkey.
• The greatest amount of food eaten during the week by any one monkey.

Input Validation: Do not accept negative numbers for pounds of food eaten
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int MONKEYS = 3;
    const int DAYS = 7;
    double food[MONKEYS][DAYS];
    double totalFood = 0;
    double averageFood;
    double leastFood;
    double greatestFood;

    cout << "Enter the amount of food eaten by each monkey for each day of the week: " << endl;
    for (int i = 0; i < MONKEYS; i++)
    {
        for (int j = 0; j < DAYS; j++)
        {
            cout << "Monkey " << (i + 1) << ", Day " << (j + 1) << ": ";
            cin >> food[i][j];

            while (food[i][j] < 0)
            {
                cout << "Food eaten cannot be negative. Please enter a positive number: ";
                cin >> food[i][j];
            }
        }
    }

    leastFood = food[0][0];
    greatestFood = food[0][0];

    for (int i = 0; i < MONKEYS; i++)
    {
        for (int j = 0; j < DAYS; j++)
        {
            totalFood += food[i][j];

            if (food[i][j] < leastFood)
            {
                leastFood = food[i][j];
            }
            if (food[i][j] > greatestFood)
            {
                greatestFood = food[i][j];
            }
        }
    }

    averageFood = totalFood / (MONKEYS * DAYS);

    cout << "The average amount of food eaten per day by the whole family of monkeys is: " << averageFood << endl;
    cout << "The least amount of food eaten during the week by any one monkey is: " << leastFood << endl;
    cout << "The greatest amount of food eaten during the week by any one monkey is: " << greatestFood << endl;

    return 0;
}