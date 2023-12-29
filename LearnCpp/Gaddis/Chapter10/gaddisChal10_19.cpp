/*  Check Writer
Write a program that displays a simulated paycheck. The program should ask the user 
to enter the date, the payee's name, and the amount of the check. It should then display 
a simulated check with the dollar amount spelled out, as shown here:
Date: 11/24/09
Pay to the Order of: John Phillips
$1920.85
One thousand nine hundred twenty and 85 cents
Be sure to format the numeric value of the check in fixed-point notation with two 
decimal places of precision. Be sure the decimal place always displays, even when the 
number is zero or has no fractional part. Use either C-strings or string class objects in 
this program.
Input Validation: Do not accept negative dollar amounts, or amounts over $10,000.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void checkWriter(string, string, double);

int main()
{
    string date;
    string name;
    double amount;

    cout << "Enter the date: ";
    getline(cin, date);

    cout << "Enter the payee's name: ";
    getline(cin, name);

    cout << "Enter the amount of the check: ";
    cin >> amount;

    checkWriter(date, name, amount);

    return 0;
}

void checkWriter(string date, string name, double amount) {
    int dollars = static_cast<int>(amount); // Extract whole dollar part
    int cents = static_cast<int>(round((amount - dollars) * 100)); // Extract cents part

    cout << fixed << showpoint << setprecision(2);
    cout << "Date: " << date << endl;
    cout << "Pay to the Order of: " << name << endl;
    cout << "$" << amount << endl;

    cout << "Amount in words: " << dollars << " dollars and " << cents << " cents." << endl;
}