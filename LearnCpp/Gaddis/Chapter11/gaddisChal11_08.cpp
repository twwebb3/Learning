/*  Search Function for Customer Accounts Program
Add a function to Programming Challenge 7 that allows the user to search the structure 
array for a particular customer's account. It should accept part of the customer's 
name as an argument and then search for an account with a name that matches it. All 
accounts that match should be displayed. If no account matches, a message saying so 
should be displayed.
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
void searchCustomer(CustomerData[], string);

int main()
{
    CustomerData customer1 = {"John Doe", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer2 = {"Jane Doe", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer3 = {"John Smith", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer4 = {"Jane Smith", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer5 = {"Jay Doe", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer6 = {"Janet Doe", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer7 = {"Jay Smith", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer8 = {"Janet Smith", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer9 = {"Jerry Doe", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer10 = {"Kay Doe", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};

    CustomerData customer11 = {"Terry Smith", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer12 = {"Taylor Smith", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer13 = {"Penn Doe", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer14 = {"Jen Doe", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer15 = {"Perry Smith", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer16 = {"Pat Smith", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer17 = {"Ted Doe", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer18 = {"Mallory Doe", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer19 = {"Matt Smith", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};
    CustomerData customer20 = {"Hermione Smith", "123 Main Street", "Anytown, USA 12345", "555-555-5555", 0, "01/01/2000"};

    CustomerData customers[20] = {customer1, customer2, customer3, customer4, customer5, customer6, customer7, customer8, customer9, customer10, customer11, customer12, customer13, customer14, customer15, customer16, customer17, customer18, customer19, customer20};

    int choice = 0;
    int customerNumber = 0;
    string name;

    do
    {
        cout << "1. Enter customer data" << endl;
        cout << "2. Change customer data" << endl;
        cout << "3. Display all customer data" << endl;
        cout << "4. Search for customer data" << endl;
        cout << "5. Exit" << endl;
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
                cout << "Enter the customer name: ";
                cin.ignore();
                getline(cin, name);
                searchCustomer(customers, name);
                break;
            case 5:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 5);

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

void searchCustomer(CustomerData customers[], string name)
{
    int count = 0;
    for (int i = 0; i < 20; i++)
    {
        if (customers[i].name == name)
        {
            displayCustomer(customers[i]);
            count++;
        }
    }

    if (count == 0)
    {
        cout << "No customers found with that name." << endl;
    }
}
