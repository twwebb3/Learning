/*  Customer Accounts
Write a program that uses a structure to store the following data about a customer
account:
Name
Address
City, State, and ZIP Telephone Number
Account Balance
Date of Last Payment
The program should use an array of at least 20 structures. It should let the user enter 
data into the array, change the contents of any element, and display all the data stored 
in the array. The program should have a menu-driven user interface.
Input Validation: When the data for a new account is entered, be sure the user enters 
data for all the fields. No negative account balances should be entered.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct CustomerData
{
    string name;
    string address;
    string cityStateZip;
    string telephoneNumber;
    double accountBalance;
    string dateOfLastPayment;
};

void displayCustomer(CustomerData);

int main()
{
    CustomerData customer1 = {"John Doe", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer2 = {"Jane Doe", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer3 = {"John Smith", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer4 = {"Jane Smith", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer5 = {"John Doe", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer6 = {"Jane Doe", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer7 = {"John Smith", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer8 = {"Jane Smith", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer9 = {"John Doe", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer10 = {"Jane Doe", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};

    CustomerData customer11 = {"John Smith", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer12 = {"Jane Smith", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer13 = {"John Doe", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer14 = {"Jane Doe", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer15 = {"John Smith", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer16 = {"Jane Smith", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer17 = {"John Doe", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer18 = {"Jane Doe", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer19 = {"John Smith", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer20 = {"Jane Smith", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};

    CustomerData customers[20] = {customer1, customer2, customer3, customer4, customer5, customer6, customer7, customer8, customer9, customer10, customer11, customer12, customer13, customer14, customer15, customer16, customer17, customer18, customer19, customer20};

    int choice = 0;
    int customerNumber = 0;

    do
    {
        cout << "1. Enter customer data" << endl;
        cout << "2. Change customer data" << endl;
        cout << "3. Display all customer data" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter the customer number: ";
                cin >> customerNumber;
                cout << "Enter the customer name: ";
                cin.ignore();
                getline(cin, customers[customerNumber - 1].name);
                cout << "Enter the customer address: ";
                getline(cin, customers[customerNumber - 1].address);
                cout << "Enter the customer city, state, and zip: ";
                getline(cin, customers[customerNumber - 1].cityStateZip);
                cout << "Enter the customer telephone number: ";
                getline(cin, customers[customerNumber - 1].telephoneNumber);
                cout << "Enter the customer account balance: ";
                cin >> customers[customerNumber - 1].accountBalance;
                cout << "Enter the customer date of last payment: ";
                cin.ignore();
                getline(cin, customers[customerNumber - 1].dateOfLastPayment);
                break;
            case 2:
                cout << "Enter the customer number: ";
                cin >> customerNumber;
                cout << "Enter the customer name: ";
                cin.ignore();
                getline(cin, customers[customerNumber - 1].name);
                cout << "Enter the customer address: ";
                getline(cin, customers[customerNumber - 1].address);
                cout << "Enter the customer city, state, and zip: ";
                getline(cin, customers[customerNumber - 1].cityStateZip);
                cout << "Enter the customer telephone number: ";
                getline(cin, customers[customerNumber - 1].telephoneNumber);
                cout << "Enter the customer account balance: ";
                cin >> customers[customerNumber - 1].accountBalance;
                cout << "Enter the customer date of last payment: ";
                cin.ignore();
                getline(cin, customers[customerNumber - 1].dateOfLastPayment);
                break;
            case 3:
                for (int i = 0; i < 20; i++)
                {
                    displayCustomer(customers[i]);
                }
                break;
            case 4:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}

void displayCustomer(CustomerData customer)
{
    cout << "Name: " << customer.name << endl;
    cout << "Address: " << customer.address << endl;
    cout << "City, State, and ZIP: " << customer.cityStateZip << endl;
    cout << "Telephone Number: " << customer.telephoneNumber << endl;
    cout << "Account Balance: " << customer.accountBalance << endl;
    cout << "Date of Last Payment: " << customer.dateOfLastPayment << endl;
    cout << endl;
}
