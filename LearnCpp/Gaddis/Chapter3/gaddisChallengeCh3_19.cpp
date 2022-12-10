/*  How Many Pizzas?
Modify the program you wrote in Programming Challenge 18 (Pizza Pi) so that it
reports the number of pizzas you need to buy for a party if each person attending is
expected to eat an average of four slices. The program should ask the user for the
number of people who will be at the party and for the diameter of the pizzas to be
ordered. It should then calculate and display the number of pizzas to purchase.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Declare variables
    const double PI = 3.14159;
    double diameter, radius, area, slices, people, pizzas;

    // Get the number of people
    cout << "Enter the number of people: ";
    cin >> people;

    // Get the diameter of the pizza
    cout << "Enter the diameter of the pizza: ";
    cin >> diameter;

    // Calculate the radius of the pizza
    radius = diameter / 2;

    // Calculate the area of the pizza
    area = PI * pow(radius, 2);

    // Calculate the number of slices
    slices = area / 14.125;

    // Calculate the number of pizzas
    pizzas = people * 4 / slices;

    // Display the number of pizzas
    cout << "The number of pizzas that need to be purchased is " << pizzas << endl;

    return 0;
}
