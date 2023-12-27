/*  Password Verifier
Imagine you are developing a software package that requires users to enter their own 
passwords. Your software requires that users' passwords meet the following criteria:

• The password should be at least six characters long.
• The password should contain at least one uppercase and at least one lowercase letter.
• The password should have at least one digit.

Write a program that asks for a password and then verifies that it meets the stated cri-
teria. If it doesn't, the program should display a message telling the user why.
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool passwordVerifier(string);

int main()
{
    string password;

    cout << "Enter a password: ";
    getline(cin, password);

    if (passwordVerifier(password))
    {
        cout << "The password is valid." << endl;
    }
    else
    {
        cout << "The password is invalid." << endl;
    }

    return 0;
}

bool passwordVerifier(string password)
{
    bool valid = true;
    int length = password.length();
    int uppercase = 0;
    int lowercase = 0;
    int digit = 0;

    if (length < 6)
    {
        valid = false;
        cout << "The password should be at least six characters long." << endl;
    }

    for (int i = 0; i < length; i++)
    {
        if (isupper(password[i]))
        {
            uppercase++;
        }

        if (islower(password[i]))
        {
            lowercase++;
        }

        if (isdigit(password[i]))
        {
            digit++;
        }
    }

    if (uppercase == 0)
    {
        valid = false;
        cout << "The password should contain at least one uppercase letter." << endl;
    }

    if (lowercase == 0)
    {
        valid = false;
        cout << "The password should contain at least one lowercase letter." << endl;
    }

    if (digit == 0)
    {
        valid = false;
        cout << "The password should contain at least one digit." << endl;
    }

    return valid;
}
