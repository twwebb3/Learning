/*  Travel Expenses
This program should be designed and written by a team of students. Here are some 
suggestions:
• One student should design function main, which will call the other functions in 
  the program. The remainder of the functions will be designed by other members
  of the team.
• The requirements of the program should be analyzed so each student is given 
  about the same work load.
• The parameters and return types of each function should be decided in advance.
• Stubs and drivers should be used to test and debug the program.
• The program can be implemented as a multifile program, or all the functions can 
  be cut and pasted into the main file.

Here is the assignment: Write a program that calculates and displays the total travel 
expenses of a businessperson on a trip. The program should have functions that ask 
for and return the following:
• The total number of days spent on the trip
• The time of departure on the first day of the trip, and the time of arrival back 
  home on the last day of the trip
• The amount of any round-trip airfare
• The amount of any car rentals
• Miles driven, if a private vehicle was used. Calculate the vehicle expense as $0.27 
  per mile driven
• Parking fees (The company allows up to $6 per day. Anything in excess of this 
  must be paid by the employee.)
• Taxi fees, if a taxi was used anytime during the trip (The company allows up to 
  $10 per day, for each day a taxi was used. Anything in excess of this must be paid 
  by the employee.)
• Conference or seminar registration fees
• Hotel expenses The company allows up to $90 per night for lodging. Anything in
  excess of this must be paid by the employee.)
• The amount of each meal eaten. On the first day of the trip, breakfast is allowed as an 
  expense if the time of departure is before 7 a.m. Lunch is allowed if the time of 
  departure is before 12 noon. Dinner is allowed on the first day if the time of departure is 
  before 6 p.m. On the last day of the trip, breakfast is allowed if the time of arrival is 
  after 8 a.m. Lunch is allowed if the time of arrival is after 1 p.m. Dinner is allowed on 
  the last day if the time of arrival is after 7 p.m. The program should only ask for the 
  amounts of allowable meals. (The company allows up to $9 for breakfast, $12 for 
  lunch, and $16 for dinner. Anything in excess of this must be paid by the employee.)

The program should calculate and display the total expenses incurred by the businessperson, 
the total allowable expenses for the trip, the excess that must be reimbursed 
by the businessperson, if any, and the amount saved by the businessperson if 
the expenses were under the total allowed.

Input Validation: Do not accept negative numbers for any dollar amount or for miles 
driven in a private vehicle. Do not accept numbers less than 1 for the number of days.
Only accept valid times for the time of departure and the time of arrival.
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int getNumDays();
int getDepartureTime();
int getArrivalTime();
double getAirfare();
double getCarRental();
double getMilesDriven();
double getParkingFees();
double getTaxiFees();
double getConferenceFees();
double getHotelExpenses();
double getMealExpenses(int, int, int);
double getTotalExpenses(double, double, double, double, double, double, double, double);
double getTotalAllowableExpenses(int, int, int, double);
double getTotalSaved(double, double);

int main()
{
    int numDays;
    int departureTime;
    int arrivalTime;
    double airfare;
    double carRental;
    double milesDriven;
    double parkingFees;
    double taxiFees;
    double conferenceFees;
    double hotelExpenses;
    double mealExpenses;
    double totalExpenses;
    double totalAllowableExpenses;
    double savedExpenses;

    numDays = getNumDays();
    departureTime = getDepartureTime();
    arrivalTime = getArrivalTime();
    airfare = getAirfare();
    carRental = getCarRental();
    milesDriven = getMilesDriven();
    parkingFees = getParkingFees();
    taxiFees = getTaxiFees();
    conferenceFees = getConferenceFees();
    hotelExpenses = getHotelExpenses();
    mealExpenses = getMealExpenses(numDays, departureTime, arrivalTime);
    totalExpenses = getTotalExpenses(airfare, carRental, milesDriven, parkingFees, taxiFees, conferenceFees, hotelExpenses, mealExpenses);
    totalAllowableExpenses = getTotalAllowableExpenses(numDays, departureTime, arrivalTime, milesDriven);
    savedExpenses = getTotalSaved(totalExpenses, totalAllowableExpenses);

    cout << fixed << showpoint << setprecision(2);
    cout << "Total expenses: $" << totalExpenses << endl;
    cout << "Total allowable expenses: $" << totalAllowableExpenses << endl;
    cout << "Final Employee expenses balance: $" << savedExpenses << endl;

    return 0;
}

int getNumDays()
{
    int numDays;

    cout << "Enter the number of days spent on the trip: ";
    cin >> numDays;

    while (numDays < 1)
    {
        cout << "Invalid number of days. Please enter a number greater than 0: ";
        cin >> numDays;
    }

    return numDays;
}

int getDepartureTime()
{
    int departureTime;

    cout << "Enter the time of departure on the first day of the trip (in 24-hour format): ";
    cin >> departureTime;

    while (departureTime < 0 || departureTime > 2359)
    {
        cout << "Invalid time. Please enter a time between 0000 and 2359: ";
        cin >> departureTime;
    }

    return departureTime;
}

int getArrivalTime()
{
    int arrivalTime;

    cout << "Enter the time of arrival back home on the last day of the trip (in 24-hour format): ";
    cin >> arrivalTime;

    while (arrivalTime < 0 || arrivalTime > 2359)
    {
        cout << "Invalid time. Please enter a time between 0000 and 2359: ";
        cin >> arrivalTime;
    }

    return arrivalTime;
}

double getAirfare()
{
    double airfare;

    cout << "Enter the amount of any round-trip airfare: $";
    cin >> airfare;

    while (airfare < 0)
    {
        cout << "Invalid amount. Please enter an amount greater than 0: $";
        cin >> airfare;
    }

    return airfare;
}

double getCarRental()
{
    double carRental;

    cout << "Enter the amount of any car rentals: $";
    cin >> carRental;

    while (carRental < 0)
    {
        cout << "Invalid amount. Please enter an amount greater than 0: $";
        cin >> carRental;
    }

    return carRental;
}

double getMilesDriven()
{
    double milesDriven;

    cout << "Enter the number of miles driven in a private vehicle: ";
    cin >> milesDriven;

    while (milesDriven < 0)
    {
        cout << "Invalid number of miles. Please enter a number greater than 0: ";
        cin >> milesDriven;
    }

    return milesDriven;
}

double getParkingFees()
{
    double parkingFees;

    cout << "Enter the amount of any parking fees: $";
    cin >> parkingFees;

    while (parkingFees < 0)
    {
        cout << "Invalid amount. Please enter an amount greater than 0: $";
        cin >> parkingFees;
    }

    return parkingFees;
}

double getTaxiFees()
{
    double taxiFees;

    cout << "Enter the amount of any taxi fees: $";
    cin >> taxiFees;

    while (taxiFees < 0)
    {
        cout << "Invalid amount. Please enter an amount greater than 0: $";
        cin >> taxiFees;
    }

    return taxiFees;
}

double getConferenceFees()
{
    double conferenceFees;

    cout << "Enter the amount of any conference or seminar fees: $";
    cin >> conferenceFees;

    while (conferenceFees < 0)
    {
        cout << "Invalid amount. Please enter an amount greater than 0: $";
        cin >> conferenceFees;
    }

    return conferenceFees;
}

double getHotelExpenses()
{
    double hotelExpenses;

    cout << "Enter the amount of any hotel expenses: $";
    cin >> hotelExpenses;

    while (hotelExpenses < 0)
    {
        cout << "Invalid amount. Please enter an amount greater than 0: $";
        cin >> hotelExpenses;
    }

    return hotelExpenses;
}

double getMealExpenses(int numDays, int departureTime, int arrivalTime)
{
    double breakfastCost = 0.00;
    double lunchCost = 0.00;
    double dinnerCost = 0.00;
    double totalMealExpenses = 0.00;

    for (int i = 0; i < numDays; i++)
    {
        if (i == 0)
        {
            if (departureTime >= 700 && departureTime <= 1200)
            {
                cout << "Enter the cost of breakfast on day " << i + 1 << ": $";
                cin >> breakfastCost;
                totalMealExpenses += breakfastCost;
            }
            else if (departureTime > 1200 && departureTime < 1800)
            {
                cout << "Enter the cost of breakfast on day " << i + 1 << ": $";
                cin >> breakfastCost;
                cout << "Enter the cost of lunch on day " << i + 1 << ": $";
                cin >> lunchCost;
                totalMealExpenses += breakfastCost + lunchCost;
            }
            else if (departureTime >= 1800)
            {
                cout << "Enter the cost of breakfast on day " << i + 1 << ": $";
                cin >> breakfastCost;
                cout << "Enter the cost of lunch on day " << i + 1 << ": $";
                cin >> lunchCost;
                totalMealExpenses += breakfastCost + lunchCost + dinnerCost;
            }
        } else if (i > 0 && i < numDays - 1)
        {
            cout << "Enter the cost of breakfast on day " << i + 1 << ": $";
            cin >> breakfastCost;
            cout << "Enter the cost of lunch on day " << i + 1 << ": $";
            cin >> lunchCost;
            cout << "Enter the cost of dinner on day " << i + 1 << ": $";
            cin >> dinnerCost;
            totalMealExpenses += breakfastCost + lunchCost + dinnerCost;
        } else
        {
            if (arrivalTime >= 700 && arrivalTime <= 1200)
            {
                cout << "Enter the cost of breakfast on day " << i + 1 << ": $";
                cin >> breakfastCost;
                totalMealExpenses += breakfastCost;
            }
            else if (arrivalTime > 1200 && arrivalTime < 1800)
            {
                cout << "Enter the cost of breakfast on day " << i + 1 << ": $";
                cin >> breakfastCost;
                cout << "Enter the cost of lunch on day " << i + 1 << ": $";
                cin >> lunchCost;
                totalMealExpenses += breakfastCost + lunchCost;
            }
            else if (arrivalTime >= 1800)
            {
                cout << "Enter the cost of breakfast on day " << i + 1 << ": $";
                cin >> breakfastCost;
                cout << "Enter the cost of lunch on day " << i + 1 << ": $";
                cin >> lunchCost;
                cout << "Enter the cost of dinner on day " << i + 1 << ": $";
                totalMealExpenses += breakfastCost + lunchCost + dinnerCost;
            }
        }
    }

    return totalMealExpenses;
}

double getTotalExpenses(double airfare, double carRental, double milesDriven, double parkingFees, double taxiFees, double conferenceFees, double hotelExpenses, double mealExpenses)
{
    double totalExpenses = airfare + carRental + parkingFees + taxiFees + conferenceFees + hotelExpenses + mealExpenses + milesDriven*0.27;

    return totalExpenses;
}

double getTotalAllowableExpenses(int numDays, int departureTime, int arrivalTime, double milesDriven)
{
    double totalAllowableExpenses = 0.00;
    double breakfastCost = 9.00;
    double lunchCost = 12.00;
    double dinnerCost = 16.00;

    // hotel expenses allowed
    totalAllowableExpenses += 90.00*(numDays - 1);
    // parking fees allowed
    totalAllowableExpenses += 6.00*numDays;
    // taxi fees allowed
    totalAllowableExpenses += 10.00*numDays;
    // miles driven allowed
    totalAllowableExpenses += milesDriven*0.27;
    // meal expenses allowed
    for (int i = 0; i < numDays; i++)
    {
        if (i == 0)
        {
            if (arrivalTime >= 700 && arrivalTime <= 1200)
            {
                totalAllowableExpenses += breakfastCost;
            }
            else if (arrivalTime > 1200 && arrivalTime < 1800)
            {
                totalAllowableExpenses += breakfastCost + lunchCost;
            }
            else if (arrivalTime >= 1800)
            {
                totalAllowableExpenses += breakfastCost + lunchCost + dinnerCost;
            }
        } else if (i > 0 && i < numDays - 1)
        {
            totalAllowableExpenses += breakfastCost + lunchCost + dinnerCost;
        } else
        {
            if (departureTime >= 700 && departureTime <= 1200)
            {
                totalAllowableExpenses += breakfastCost;
            }
            else if (departureTime > 1200 && departureTime < 1800)
            {
                totalAllowableExpenses += breakfastCost + lunchCost;
            }
            else if (departureTime >= 1800)
            {
                totalAllowableExpenses += breakfastCost + lunchCost + dinnerCost;
            }
        }
    }

    return totalAllowableExpenses;
}

double getTotalSaved(double totalExpenses, double totalAllowableExpenses)
{
    double totalSaved = totalAllowableExpenses - totalExpenses;

    return totalSaved;
}
