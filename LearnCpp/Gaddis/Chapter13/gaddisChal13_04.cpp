/*  Personal Information Class
Design a class that holds the following personal data: name, address, age, and phone 
number. Write appropriate accessor and mutator functions. Demonstrate the class by 
writing a program that creates three instances of it. One instance should hold your infor-
mation, and the other two should hold your friends' or family members' information.
*/

#include <iostream>
#include <string>

using namespace std;

class PersonalInfo
{
private:
    string name;
    string address;
    int age;
    string phoneNumber;
public:
    PersonalInfo(string n, string a, int ag, string p)
    {
        name = n;
        address = a;
        age = ag;
        phoneNumber = p;
    }
    void setName(string n)
    {
        name = n;
    }
    void setAddress(string a)
    {
        address = a;
    }
    void setAge(int ag)
    {
        age = ag;
    }
    void setPhoneNumber(string p)
    {
        phoneNumber = p;
    }
    string getName()
    {
        return name;
    }
    string getAddress()
    {
        return address;
    }
    int getAge()
    {
        return age;
    }
    string getPhoneNumber()
    {
        return phoneNumber;
    }
};

int main()
{
    PersonalInfo me("John Doe", "123 Main St", 25, "555-1234");
    PersonalInfo friend1("Jane Doe", "456 Elm St", 30, "555-5678");
    PersonalInfo friend2("Jim Doe", "789 Oak St", 35, "555-9101");

    cout << "Name: " << me.getName() << endl;
    cout << "Address: " << me.getAddress() << endl;
    cout << "Age: " << me.getAge() << endl;
    cout << "Phone Number: " << me.getPhoneNumber() << endl;

    cout << "Name: " << friend1.getName() << endl;
    cout << "Address: " << friend1.getAddress() << endl;
    cout << "Age: " << friend1.getAge() << endl;
    cout << "Phone Number: " << friend1.getPhoneNumber() << endl;

    cout << "Name: " << friend2.getName() << endl;
    cout << "Address: " << friend2.getAddress() << endl;
    cout << "Age: " << friend2.getAge() << endl;
    cout << "Phone Number: " << friend2.getPhoneNumber() << endl;

    return 0;
}
