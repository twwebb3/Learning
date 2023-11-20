/*  Using Files--Hospital Report
Modify Programming Challenge 14, Overloaded Hospital, to write the report it 
creates to a file. Print the contents of the file to hand in to your instructor.
*/

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

char getPatientType();
int getNumDays();
double getDailyRate();
double getMedicationCharges();
double getServicesCharges();
double getTotalCharges(int, double, double, double);
double getTotalCharges(double, double);

int main()
{
    char patientType;
    int numDays;
    double dailyRate;
    double medicationCharges;
    double servicesCharges;
    double totalCharges;

    patientType = getPatientType();

    if (patientType == 'I' || patientType == 'i')
    {
        numDays = getNumDays();
        dailyRate = getDailyRate();
        medicationCharges = getMedicationCharges();
        servicesCharges = getServicesCharges();
        totalCharges = getTotalCharges(numDays, dailyRate, medicationCharges, servicesCharges);
    }
    else
    {
        medicationCharges = getMedicationCharges();
        servicesCharges = getServicesCharges();
        totalCharges = getTotalCharges(medicationCharges, servicesCharges);
    }

    cout << fixed << showpoint << setprecision(2);
    cout << "The total charges are $" << totalCharges << endl;

    ofstream outputFile;
    outputFile.open("hospitalReport.txt");
    outputFile << fixed << showpoint << setprecision(2);
    outputFile << "The total charges are $" << totalCharges << endl;
    outputFile.close();

    return 0;
}

char getPatientType()
{
    char patientType;

    cout << "Was the patient admitted as an in-patient or an out-patient? (I or O): ";
    cin >> patientType;

    while (patientType != 'I' && patientType != 'i' && patientType != 'O' && patientType != 'o')
    {
        cout << "Invalid input. Please enter I or O: ";
        cin >> patientType;
    }

    return patientType;
}

int getNumDays()
{
    int numDays;

    cout << "Enter the number of days spent in the hospital: ";
    cin >> numDays;

    while (numDays < 0)
    {
        cout << "Number of days cannot be negative. Please enter a positive value: ";
        cin >> numDays;
    }

    return numDays;
}

double getDailyRate()
{
    double dailyRate;

    cout << "Enter the daily rate: ";
    cin >> dailyRate;

    while (dailyRate < 0)
    {
        cout << "Daily rate cannot be negative. Please enter a positive value: ";
        cin >> dailyRate;
    }

    return dailyRate;
}

double getMedicationCharges()
{
    double medicationCharges;

    cout << "Enter the medication charges: ";
    cin >> medicationCharges;

    while (medicationCharges < 0)
    {
        cout << "Medication charges cannot be negative. Please enter a positive value: ";
        cin >> medicationCharges;
    }

    return medicationCharges;
}

double getServicesCharges()
{
    double servicesCharges;

    cout << "Enter the services charges: ";
    cin >> servicesCharges;

    while (servicesCharges < 0)
    {
        cout << "Services charges cannot be negative. Please enter a positive value: ";
        cin >> servicesCharges;
    }

    return servicesCharges;
}

double getTotalCharges(int numDays, double dailyRate, double medicationCharges, double servicesCharges)
{
    double totalCharges;

    totalCharges = (numDays * dailyRate) + medicationCharges + servicesCharges;

    return totalCharges;
}

double getTotalCharges(double medicationCharges, double servicesCharges)
{
    double totalCharges;

    totalCharges = medicationCharges + servicesCharges;

    return totalCharges;
}
