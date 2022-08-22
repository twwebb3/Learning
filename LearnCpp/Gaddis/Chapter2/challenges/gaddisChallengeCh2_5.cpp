/*  Average of Values
To get the average of a series of values, you add the values up
and then divide by the sum by the number of values. Write a
program that stores the following values in five different
variables: 28, 32, 37, 24, and 33. The program should first
calculate the sum of these five varibles and store the result in
a second varable named sum. Then, the program should divide the
sum variable by 5 to get the average. Display the average on the screen.
*/

#include <iostream>
using namespace std;

int main()
{
	int a=28, 
		b=32, 
		c=37, 
		d=24, 
		e=33,
		sum;
	float mean;

	sum=a+b+c+d+e;
	mean=sum/5.0; //have to specify 5.0 to make it a float

	cout << "The average is: " << mean << endl;

	return 0;
}