/*  Monthly Budget
A student has established the following monthly budget:
Housing $500.00
Utilities $150.00
Household Expenses $65.00
Transportation $50.00
Food $250.00
Medical $30.00
Insurance $100.00
Entertainment $150.00
Clothing $75.00
Miscellaneous $50.00

Write a program that has a MonthlyBudget structure designed to hold each of these 
expense categories. The program should pass the structure to a function that asks the 
user to enter the amounts spent in each budget category during a month. The program 
should then pass the structure to a function that displays a report indicating the 
amount over or under in each category, as well as the amount over or under for the 
entire monthly budget.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct MonthlyBudget
{
    double housing;
    double utilities;
    double householdExpenses;
    double transportation;
    double food;
    double medical;
    double insurance;
    double entertainment;
    double clothing;
    double miscellaneous;
};

void displayBudget(MonthlyBudget);
void displayOverUnder(MonthlyBudget, MonthlyBudget);

int main()
{
    MonthlyBudget budget = {500, 150, 65, 50, 250, 30, 100, 150, 75, 50};
    MonthlyBudget expenses = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    cout << "Enter the amount spent on housing: ";
    cin >> expenses.housing;
    cout << "Enter the amount spent on utilities: ";
    cin >> expenses.utilities;
    cout << "Enter the amount spent on household expenses: ";
    cin >> expenses.householdExpenses;
    cout << "Enter the amount spent on transportation: ";
    cin >> expenses.transportation;
    cout << "Enter the amount spent on food: ";
    cin >> expenses.food;
    cout << "Enter the amount spent on medical: ";
    cin >> expenses.medical;
    cout << "Enter the amount spent on insurance: ";
    cin >> expenses.insurance;
    cout << "Enter the amount spent on entertainment: ";
    cin >> expenses.entertainment;
    cout << "Enter the amount spent on clothing: ";
    cin >> expenses.clothing;
    cout << "Enter the amount spent on miscellaneous: ";
    cin >> expenses.miscellaneous;

    displayBudget(budget);
    displayBudget(expenses);
    displayOverUnder(budget, expenses);

    return 0;
}

void displayBudget(MonthlyBudget budget)
{
    cout << fixed << setprecision(2);
    cout << "Housing: $" << budget.housing << endl;
    cout << "Utilities: $" << budget.utilities << endl;
    cout << "Household Expenses: $" << budget.householdExpenses << endl;
    cout << "Transportation: $" << budget.transportation << endl;
    cout << "Food: $" << budget.food << endl;
    cout << "Medical: $" << budget.medical << endl;
    cout << "Insurance: $" << budget.insurance << endl;
    cout << "Entertainment: $" << budget.entertainment << endl;
    cout << "Clothing: $" << budget.clothing << endl;
    cout << "Miscellaneous: $" << budget.miscellaneous << endl;
}

void displayOverUnder(MonthlyBudget budget, MonthlyBudget expenses)
{
    cout << fixed << setprecision(2);
    cout << "Housing: $" << expenses.housing - budget.housing << endl;
    cout << "Utilities: $" << expenses.utilities - budget.utilities << endl;
    cout << "Household Expenses: $" << expenses.householdExpenses - budget.householdExpenses << endl;
    cout << "Transportation: $" << expenses.transportation - budget.transportation << endl;
    cout << "Food: $" << expenses.food - budget.food << endl;
    cout << "Medical: $" << expenses.medical - budget.medical << endl;
    cout << "Insurance: $" << expenses.insurance - budget.insurance << endl;
    cout << "Entertainment: $" << expenses.entertainment - budget.entertainment << endl;
    cout << "Clothing: $" << expenses.clothing - budget.clothing << endl;
    cout << "Miscellaneous: $" << expenses.miscellaneous - budget.miscellaneous << endl;
}

