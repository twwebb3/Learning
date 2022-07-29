/* Sales Prediction
The East Coast sales division of a company generates 62 percent
of total sales. Based on that percentage, write a program that
will predict how much the East Coast division will generate if
the company has $4.6 million in sales this year
*/

#include <iostream>
using namespace std;

int main()
{
	int sales=4600000, total;
	float eastCoastShare=0.62;

	total=sales*eastCoastShare;

	cout << "Total East Coast sales: "
		 << total
		 << endl;

	return 0;

}