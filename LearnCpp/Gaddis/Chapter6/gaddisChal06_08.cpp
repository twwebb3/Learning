/*  Coin Toss
Write a function named coinToss that simulates the tossing of a coin. When you call 
the function, it should generate a random number in the range of 1 through 2. If the 
random number is 1, the function should display "heads." If the random number is 2, 
the function should display "tails." Demonstrate the function in a program that asks 
the user how many times the coin should be tossed, and then simulates the tossing of 
the coin that number of times.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void coinToss(int);

int main()
{
    int tosses;

    cout << "How many times should the coin be tossed? ";
    cin >> tosses;

    coinToss(tosses);

    return 0;
}

void coinToss(int tosses)
{
    int coin;
    int heads = 0, tails=0;

    srand(time(0));

    for (int i = 0; i < tosses; i++)
    {
        coin = rand() % 2 + 1;

        if (coin == 1)
        {
            cout << "Heads" << endl;
            heads++;
        }
        else
        {
            cout << "Tails" << endl;
            tails++;
        }
    }

    cout << "Percentage of heads: " << 1.0 * heads / tosses << endl;
}