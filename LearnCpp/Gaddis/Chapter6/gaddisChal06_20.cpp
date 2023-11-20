/*  Multiple Stock Sales
Use the function that you wrote for Programming Challenge 19 (Stock Profit) in a 
program that calculates the total profit or loss from the sale of multiple stocks. The 
program should ask the user for the number of stock sales, and the necessary data for 
each stock sale. It should accumulate the profit or loss for each stock sale and then 
display the total.
*/

#include <iostream>
#include <iomanip>

using namespace std;

float stockProfit(int, float, float, float, float);

int main()
{
    int numStockSales;
    float totalProfit = 0.0;

    cout << "Enter the number of stock sales: ";
    cin >> numStockSales;

    for (int i = 0; i < numStockSales; i++)
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

        totalProfit += profit;
    }

    cout << fixed << setprecision(2);
    cout << "The total profit from the sale of the stock is $" << totalProfit << endl;

    return 0;
}

float stockProfit(int numShares, float purchasePrice, float purchaseCommission, float salePrice, float saleCommission)
{
    float profit;

    profit = ((numShares * salePrice) - saleCommission) - ((numShares * purchasePrice) + purchaseCommission);

    return profit;
}