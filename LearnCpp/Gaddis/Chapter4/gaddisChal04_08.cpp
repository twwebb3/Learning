/* Sorted Names
Write a program that asks the user to enter three names, and then displays the names
sorted in ascending order. Assume that none of the names are the same. For example,
if the user enters "Charlie", "Leslie", and "Andy", the program should display:
Andy
Charlie
Leslie
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string name1, name2, name3;
    string min, mid, max;

    cout << "Enter three names: ";
    cin >> name1 >> name2 >> name3;

    min = (name1 < name2 && name1 < name3) ? name1 : (name2 < name3) ? name2 : name3;
    max = (name1 > name2 && name1 > name3) ? name1 : (name2 > name3) ? name2 : name3;
    mid = (name1 != min && name1 != max) ? name1 : (name2 != min && name2 != max) ? name2 : name3;

    cout << min << endl;
    cout << mid << endl;
    cout << max << endl;

    return 0;
}