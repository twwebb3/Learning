/*  Drink Machine Simulator
Write a program that simulates a soft drink machine. The program should use a structure that stores the following data:
Drink Name
Drink Cost
Number of Drinks in Machine

The program should create an array of five structures. The elements should be 
initialized with the following data:

Drink Name Cost Number in Machine
Cola .75 20
Root Beer .75 20
Lemon-Lime .75 20
Grape Soda .80 20
Cream Soda .80 20

Each time the program runs, it should enter a loop that performs the following 
steps: A list of drinks is displayed on the screen. The user should be allowed to 
either quit the program or pick a drink. If the user selects a drink, he or she will 
next enter the amount of money that is to be inserted into the drink machine. The 
program should display the amount of change that would be returned and subtract 
one from the number of that drink left in the machine. If the user selects a drink that 
has sold out, a message should be displayed. The loop then repeats. When the user 
chooses to quit the program it should display the total amount of money the 
machine earned.
Input Validation: When the user enters an amount of money, do not accept negative 
values, or values greater than $1.00.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct DrinkData
{
    string name;
    double cost;
    int numberInMachine;
};

void displayDrink(DrinkData);

int main()
{
    DrinkData drink1 = {"Cola", .75, 20};
    DrinkData drink2 = {"Root Beer", .75, 20};
    DrinkData drink3 = {"Lemon-Lime", .75, 20};
    DrinkData drink4 = {"Grape Soda", .80, 20};
    DrinkData drink5 = {"Cream Soda", .80, 20};

    DrinkData drinks[5] = {drink1, drink2, drink3, drink4, drink5};

    int choice = 0;
    int drinkNumber = 0;
    double moneyInserted = 0;
    double change = 0;
    double totalMoney = 0;

    do
    {
        cout << "Enter the number of the drink you would like to purchase: " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << ". ";
            displayDrink(drinks[i]);
        }
        cout << "6. Quit" << endl;
        cin >> choice;

        if (choice == 6)
        {
            break;
        }

        cout << "Enter the amount of money you would like to insert: ";
        cin >> moneyInserted;

        if (moneyInserted < 0 || moneyInserted > 1)
        {
            cout << "Invalid amount of money inserted." << endl;
            continue;
        }

        if (choice == 1)
        {
            if (drinks[0].numberInMachine == 0)
            {
                cout << "Sorry, we are out of " << drinks[0].name << "." << endl;
                continue;
            }
            else
            {
                change = moneyInserted - drinks[0].cost;
                if (change < 0)
                {
                    cout << "Not enough money inserted." << endl;
                    continue;
                }
                else
                {
                    drinks[0].numberInMachine--;
                    totalMoney += drinks[0].cost;
                    cout << "Your change is $" << change << "." << endl;
                }
            }
        }
        else if (choice == 2)
        {
            if (drinks[1].numberInMachine == 0)
            {
                cout << "Sorry, we are out of " << drinks[1].name << "." << endl;
                continue;
            }
            else
            {
                change = moneyInserted - drinks[1].cost;
                if (change < 0)
                {
                    cout << "Not enough money inserted." << endl;
                    continue;
                }
                else
                {
                    drinks[1].numberInMachine--;
                    totalMoney += drinks[1].cost;
                    cout << "Your change is $" << change << "." << endl;
                }
            }
        }
        else if (choice == 3)
        {
            if (drinks[2].numberInMachine == 0)
            {
                cout << "Sorry, we are out of " << drinks[2].name << "." << endl;
                continue;
            }
            else
            {
                change = moneyInserted - drinks[2].cost;
                if (change < 0)
                {
                    cout << "Not enough money inserted." << endl;
                    continue;
                }
                else
                {
                    drinks[2].numberInMachine--;
                    totalMoney += drinks[2].cost;
                    cout << "Your change is $" << change << "." << endl;
                }
            }
        }
        else if (choice == 4)
        {
            if (drinks[3].numberInMachine == 0)
            {
                cout << "Sorry, we are out of " << drinks[3].name << "." << endl;
                continue;
            }
            else
            {
                change = moneyInserted - drinks[3].cost;
                if (change < 0)
                {
                    cout << "Not enough money inserted." << endl;
                    continue;
                }
                else
                {
                    drinks[3].numberInMachine--;
                    totalMoney += drinks[3].cost;
                    cout << "Your change is $" << change << "." << endl;
                }
            }
        }
        else if (choice == 5)
        {
            if (drinks[4].numberInMachine == 0)
            {
                cout << "Sorry, we are out of " << drinks[4].name << "." << endl;
                continue;
            }
            else
            {
                change = moneyInserted - drinks[4].cost;
                if (change < 0)
                {
                    cout << "Not enough money inserted." << endl;
                    continue;
                }
                else
                {
                    drinks[4].numberInMachine--;
                    totalMoney += drinks[4].cost;
                    cout << "Your change is $" << change << "." << endl;
                }
            }
        }
        else
        {
            cout << "Invalid choice." << endl;
            continue;
        }
    } while (choice != 6);

    cout << "Total money earned: $" << totalMoney << endl;

    return 0;
}

void displayDrink(DrinkData drink)
{
    cout << drink.name << " $" << drink.cost << " " << drink.numberInMachine << endl;
}