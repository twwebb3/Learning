/* Shipping Charges
The Fast Freight Shipping Company charges the following rates:
Weight of Package (in Kilograms)     Rate per 500 Miles Shipped
2 Kg or less                         $1.10
Over 2 Kg but not more than 6 kg     $2.20
Over 6 Kg but not more than 10 kg    $3.70
Over 10 Kg but not more than 20 kg   $4.80

Write a program that asks for the weight of the package and the distance it is to be
shipped, and then displays the charges.

Input Validation: Do not accept values of 0 or less for the weight of the package. Do
not accept weights of more than 20 Kg (this is the maximum weight the company will
ship). Do not accept distances of less than 10 miles or more than 3,000 miles. These
are the company's minimum and maximum shipping distances.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double weight, distance, charges;

    cout << "Enter the weight of the package (in Kg): ";
    cin >> weight;
    cout << "Enter the distance the package is to be shipped (in miles): ";
    cin >> distance;

    if (weight <= 0)
    {
        cout << "Invalid weight" << endl;
    }
    else if (weight > 20)
    {
        cout << "Invalid weight" << endl;
    }
    else if (distance < 10)
    {
        cout << "Invalid distance" << endl;
    }
    else if (distance > 3000)
    {
        cout << "Invalid distance" << endl;
    }
    else if (weight <= 2)
    {
        charges = 1.10 * (distance / 500);
        cout << "The shipping charges are $" << charges << endl;
    }
    else if (weight > 2 && weight <= 6)
    {
        charges = 2.20 * (distance / 500);
        cout << "The shipping charges are $" << charges << endl;
    }
    else if (weight > 6 && weight <= 10)
    {
        charges = 3.70 * (distance / 500);
        cout << "The shipping charges are $" << charges << endl;
    }
    else if (weight > 10 && weight <= 20)
    {
        charges = 4.80 * (distance / 500);
        cout << "The shipping charges are $" << charges << endl;
    }

    return 0;
}