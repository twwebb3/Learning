/*  Freezing and Boiling Points
The following table lists the freezing and boiling points of several substances

Substance  Freezing Point  Boiling Point
Ethyl alcohol -173 172
Oxygen -362 -306
Water 32 212

Design a class that stores a temperature in a temperature member variable and has 
the appropriate accessor and mutator functions. In addition to appropriate construc-
tors, the class should have the following member functions:
• isEthylFreezing. This function should return the bool value true if the 
  temperature stored in the temperature field is at or below the freezing point 
  of ethyl alcohol. Otherwise, the function should return false.
• isEthylBoiling. This function should return the bool value true if the temperature 
  stored in the temperature field is at or above the boiling point of ethyl alcohol. 
  Otherwise, the function should return false.
• isoxygenFreezing. This function should return the bool value true if the temperature 
  stored in the temperature field is at or below the freezing point of oxy-gen. Otherwise, 
  the function should return false.
• isOxygenBoiling. This function should return the bool value true if the temperature 
  stored in the temperature field is at or above the boiling point of oxy-gen. Otherwise, 
  the function should return false.
• iswaterFreezing. This function should return the bool value true if the temperature 
  stored in the temperature field is at or below the freezing point of water. Otherwise, 
  the function should return false.
• iswaterBoiling. This function should return the bool value true if the temperature 
  stored in the temperature field is at or above the boiling point of water.
  Otherwise, the function should return false.

Write a program that demonstrates the class. The program should ask the user to enter a temperature, 
and then display a list of the substances that will freeze at that temperature and those that will 
boil at that temperature. For example, if the temperature is -20 the class should report that water 
will freeze and oxygen will boil at that
temperature.
*/

#include <iostream>
#include <iomanip>

using namespace std;

class Temperature
{
private:
    double temp;
public:
    Temperature()
    {
        temp = 0;
    }
    void setTemp(double t)
    {
        temp = t;
    }
    double getTemp()
    {
        return temp;
    }
    bool isEthylFreezing()
    {
        return temp <= -173;
    }
    bool isEthylBoiling()
    {
        return temp >= 172;
    }
    bool isOxygenFreezing()
    {
        return temp <= -362;
    }
    bool isOxygenBoiling()
    {
        return temp >= -306;
    }
    bool isWaterFreezing()
    {
        return temp <= 32;
    }
    bool isWaterBoiling()
    {
        return temp >= 212;
    }
};

int main()
{
    Temperature temp;
    double t;

    cout << "Enter a temperature: ";
    cin >> t;
    temp.setTemp(t);

    cout << "Substances that will freeze at " << t << " degrees: ";
    if (temp.isEthylFreezing())
    {
        cout << "Ethyl alcohol ";
    }
    if (temp.isOxygenFreezing())
    {
        cout << "Oxygen ";
    }
    if (temp.isWaterFreezing())
    {
        cout << "Water ";
    }
    cout << endl;

    cout << "Substances that will boil at " << t << " degrees: ";
    if (temp.isEthylBoiling())
    {
        cout << "Ethyl alcohol ";
    }
    if (temp.isOxygenBoiling())
    {
        cout << "Oxygen ";
    }
    if (temp.isWaterBoiling())
    {
        cout << "Water ";
    }
    cout << endl;

    return 0;
}