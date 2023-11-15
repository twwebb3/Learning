/*  Lowest Score Drop
Write a program that calculates the average of a group of test scores, where the lowest 
score in the group is dropped. It should use the following functions:

• void getscore() should ask the user for a test score, store it in a reference 
  parameter variable, and validate it. This function should be called by main once 
  for each of the five scores to be entered.
• void calcAverage() should calculate and display the average of the four highest 
  scores. This function should be called just once by main, and should be passed 
  the five scores.
• int findLowest () should find and return the lowest of the five scores passed to 
  it. It should be called by calcAverage, which uses the function to determine which 
  of the five scores to drop.

Input Validation: Do not accept test scores lower than 0 or higher than 100.
*/

#include <iostream>
#include <iomanip>

using namespace std;

void getScore(int&);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main()
{
    int score1;
    int score2;
    int score3;
    int score4;
    int score5;

    getScore(score1);
    getScore(score2);
    getScore(score3);
    getScore(score4);
    getScore(score5);

    calcAverage(score1, score2, score3, score4, score5);

    return 0;
}

void getScore(int& score)
{
    cout << "Enter a test score: ";
    cin >> score;

    while (score < 0 || score > 100)
    {
        cout << "Test scores must be between 0 and 100. Please enter a valid score: ";
        cin >> score;
    }
}

void calcAverage(int score1, int score2, int score3, int score4, int score5)
{
    int lowestScore = findLowest(score1, score2, score3, score4, score5);
    int average = (score1 + score2 + score3 + score4 + score5 - lowestScore) / 4;

    cout << "The average of the four highest scores is " << average << endl;
}

int findLowest(int score1, int score2, int score3, int score4, int score5)
{
    int lowestScore = score1;

    if (score2 < lowestScore)
    {
        lowestScore = score2;
    }

    if (score3 < lowestScore)
    {
        lowestScore = score3;
    }

    if (score4 < lowestScore)
    {
        lowestScore = score4;
    }

    if (score5 < lowestScore)
    {
        lowestScore = score5;
    }

    return lowestScore;
}
