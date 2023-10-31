/*  Pattern Displays
Write a program that uses a loop to display Pattern A below, followed by another 
loop that displays Pattern B.

Pattern A                        Pattern B
+                                ++++++++++
++                               +++++++++
+++                              ++++++++
++++                             +++++++
+++++                            ++++++
++++++                           +++++
+++++++                          ++++
++++++++                         +++
+++++++++                        ++
++++++++++                       +

*/

#include <iostream>

using namespace std;

int main()
{
    cout << "Pattern A" << endl;

    for (int row = 0; row < 10; row++)
    {
        for (int col = 0; col <= row; col++)
            cout << "+";

        cout << endl;
    }

    cout << endl << "Pattern B" << endl;

    for (int row = 0; row < 10; row++)
    {
        for (int col = 10; col > row; col--)
            cout << "+";

        cout << endl;
    }

    return 0;
}