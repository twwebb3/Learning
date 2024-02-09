/*  Widget Factory
Design a class for a widget manufacturing plant. Assuming that 10 widgets may be 
produced each hour, the class object will calculate how many days it will take to 
produce any number of widgets. (The plant operates two shifts of eight hours each 
per day.) Write a program that asks the user for the number of widgets that have 
been ordered and then displays the number of days it will take to produce them.

Input Validation: Do not accept negative values for the number of widgets ordered.
*/

#include <iostream>
#include <iomanip>

using namespace std;

class WidgetFactory
{
private:
    int widgetsOrdered;
    int daysToProduce;
public:
    WidgetFactory()
    {
        widgetsOrdered = 0;
        daysToProduce = 0;
    }
    void setWidgetsOrdered(int w)
    {
        widgetsOrdered = w;
    }
    int getWidgetsOrdered()
    {
        return widgetsOrdered;
    }
    int getDaysToProduce()
    {
        return daysToProduce;
    }
    void calculateDaysToProduce()
    {
        /// round up to the nearest whole number
        if (widgetsOrdered % 160 > 0)
            daysToProduce = (widgetsOrdered / 160) + 1;
        else
            daysToProduce = (widgetsOrdered / 160);
    }
};

int main()
{
    WidgetFactory factory;
    int widgetsOrdered;

    cout << "Enter the number of widgets ordered: ";
    cin >> widgetsOrdered;

    while (widgetsOrdered < 0)
    {
        cout << "The number of widgets ordered cannot be negative. Please enter a non-negative number: ";
        cin >> widgetsOrdered;
    }

    factory.setWidgetsOrdered(widgetsOrdered);
    factory.calculateDaysToProduce();

    cout << "It will take " << factory.getDaysToProduce() << " days to produce " << factory.getWidgetsOrdered() << " widgets." << endl;

    return 0;
}
