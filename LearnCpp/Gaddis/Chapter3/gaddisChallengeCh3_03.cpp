/*  Test Average
Write a program that asks for five test scores. The program
should calculate the average test score and display it. The
number displayed should be formatted in a fixed-point
notation, with one decimal point of precision.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float score1, score2, score3, score4, score5, avgScore;

	cout << "Enter score 1: ";
	cin >> score1;
	cout << "Enter score 2: ";
	cin >> score2;
	cout << "Enter score 3: ";
	cin >> score3;
	cout << "Enter score 4: ";
	cin >> score4;
	cout << "Enter score 5: ";
	cin >> score5;

	avgScore = (score1+score2+score3+score4+score5)/5;

	cout << "Average score: " << avgScore; // need to make it one decimal
}