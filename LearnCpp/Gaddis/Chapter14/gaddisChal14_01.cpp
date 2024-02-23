/*  Numbers Class
Design a class Numbers that can be used to translate whole dollar amounts in the 
range 0 through 9999 into an English description of the number. For example, the 
number 713 would be translated into the string seven hundred thirteen, and 8203 
would be translated into eight thousand two hundred three. The class should have 
a single integer member variable:

int number;

and a static array of strings that specify how to translate key dollar amounts into 
the desired format. For example, you might use static strings such as

char lessThan20[20][25] = ("zero", "one", ., "eighteen", "nineteen" };
char hundred[] = "hundred";
char thousand[] = "thousand" ;

The class should have a constructor that accepts a nonnegative integer and uses it to 
initialize the Numbers object. It should have a member function print () that prints 
the English description of the Numbers object. Demonstrate the class by writing a main 
program that asks the user to enter a number in the proper range and then prints 
out its English description.
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Numbers
{
private:
    int number;
    static string lessThan20[20];
    static string hundred;
    static string thousand;
    static string tens[10];
public:
    Numbers(int n)
    {
        number = n;
    }
    void print()
    {
        int thousands = number / 1000;
        int hundreds = (number % 1000) / 100;
        int tens = (number % 100) / 10;
        int ones = number % 10;
        if (thousands > 0)
        {
            cout << lessThan20[thousands] << " " << thousand << " ";
        }
        if (hundreds > 0)
        {
            cout << lessThan20[hundreds] << " " << hundred << " ";
        }
        if (tens > 1)
        {
            cout << Numbers::tens[tens] << " ";
            if (ones > 0)
            {
                cout << lessThan20[ones];
            }
        }
        else if (tens == 1)
        {
            cout << lessThan20[10 + ones];
        }
        else
        {
            cout << lessThan20[ones];
        }
    }
};

string Numbers::lessThan20[20] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
                                  "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
                                  "eighteen", "nineteen"};
string Numbers::hundred = "hundred";
string Numbers::thousand = "thousand";
string Numbers::tens[10] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

int main()
{
    int number;

    cout << "Enter a number between 0 and 9999: ";
    cin >> number;
    while (number < 0 || number > 9999)
    {
        cout << "The number must be between 0 and 9999: ";
        cin >> number;
    }
    Numbers numbers(number);
    numbers.print();
    cout << endl;

    return 0;
}
