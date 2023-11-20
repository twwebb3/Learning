/*  Stock Profit
The profit from the sale of a stock can be calculated as follows:

Profit = ((NS × SP) - SC) - ((NS × PP) + PC)

where NS is the number of shares, SP is the sale price per share, SC is the sale commission 
paid, PP is the purchase price per share, and PC is the purchase commission paid.
If the calculation yields a positive value, then the sale of the stock resulted in a profit.
If the calculation yields a negative number, then the sale resulted in a loss.

Write a function that accepts as arguments the number of shares, the purchase price 
per share, the purchase commission paid, the sale price per share, and the sale commission paid. 
The function should return the profit (or loss) from the sale of stock.
Demonstrate the function in a program that asks the user to enter the necessary data 
and displays the amount of the profit or loss.
*/

#include <iostream>
#include <iomanip>

using namespace std;

float stockProfit(int, float, float, float, float);

int main()
{
    int numShares;
    float purchasePrice;
    float purchaseCommission;
    float salePrice;
    float saleCommission;
    float profit;

    cout << "Enter the number of shares: ";
    cin >> numShares;

    cout << "Enter the purchase price per share: ";
    cin >> purchasePrice;

    cout << "Enter the purchase commission paid: ";
    cin >> purchaseCommission;

    cout << "Enter the sale price per share: ";
    cin >> salePrice;

    cout << "Enter the sale commission paid: ";
    cin >> saleCommission;

    profit = stockProfit(numShares, purchasePrice, purchaseCommission, salePrice, saleCommission);

    cout << fixed << setprecision(2);
    cout << "The profit from the sale of the stock is $" << profit << endl;

    return 0;
}

float stockProfit(int numShares, float purchasePrice, float purchaseCommission, float salePrice, float saleCommission)
{
    float profit;

    profit = ((numShares * salePrice) - saleCommission) - ((numShares * purchasePrice) + purchaseCommission);

    return profit;
}