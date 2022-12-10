/*  Word Game
Write a program that plays a word game with the user. The program should ask the
user to enter the following:

* His or her name
* His or her age
* The name of a city
* The Name of a college
* A prfession
* A type of animal
* A pet's name

After the user has entered these items, the program should display the following story,
inserting the user's input into tht appropriate locations:

There once was a person named NAME who lived in CITY. At the age of
AGE, NAME went to college at COLLEGE. NAME graduated and went to work
as a PROFESSION. Then, NAME adopted a(n) ANIMAL named PETNAME. They
both lived happily ever after!
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int SIZE=20;
    // Declare variables
    string name;
    int age;
    string city;
    string college;
    string profession;
    string animal;
    string petName;

    // Get the user's name
    cout << "Enter your name: ";
    getline(cin, name);

    // Get the user's age
    cout << "Enter your age: ";
    cin >> age;

    // Consume the remaining newline
    cin.ignore();

    // Get the name of a city
    cout << "Enter the name of a city: ";
    getline(cin, city);

    // Get the name of a college
    cout << "Enter the name of a college: ";
    getline(cin, college);

    // Get a profession
    cout << "Enter a profession: ";
    getline(cin, profession);

    // Get a type of animal
    cout << "Enter a type of animal: ";
    getline(cin, animal);

    // Get a pet's name
    cout << "Enter a pet's name: ";
    getline(cin, petName);

    // Display the story
    cout << "There once was a person named " << name << " who lived in " << city << ". At the age of " << age << ", " << name << " went to college at " << college << ". " << name << " graduated and went to work as a " << profession << ". Then, " << name << " adopted a(n) " << animal << " named " << petName << ". They both lived happily ever after!" << endl;

    return 0;
}