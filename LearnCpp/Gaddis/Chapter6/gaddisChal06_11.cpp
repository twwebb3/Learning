/*  Star Search
A particular talent competition has five judges, each of whom awards a score between 
O and 10 to each performer: Fractional scores, such as 8.3, are allowed. A performer's 
final score is determined by dropping the highest and lowest score received, then averaging 
the three remaining scores. Write a program that uses this method to calculate a 
contestant's score. It should include the following functions:

• void getJudgeData() should ask the user for a judge's score, store it in a reference 
  parameter variable, and validate it. This function should be called by main 
  once for each of the five judges.
• void calcscore() should calculate and display the average of the three scores that 
  remain after dropping the highest and lowest scores the performer received. This 
  function should be called just once by main, and should be passed the five scores.

The last two functions, described below, should be called by calcscore, which uses 
the returned information to determine which of the scores to drop.
• int findLowest () should find and return the lowest of the five scores passed to it.
• int findhighest () should find and return the highest of the five scores passed to it.

Input Validation: Do not accept judge scores lower than 0 or higher than 10.
*/

#include <iostream>
#include <iomanip>

using namespace std;

void getJudgeData(double&);
void calcScore(double, double, double, double, double);
double findLowest(double, double, double, double, double);
double findHighest(double, double, double, double, double);

int main()
{
    double score1;
    double score2;
    double score3;
    double score4;
    double score5;

    getJudgeData(score1);
    getJudgeData(score2);
    getJudgeData(score3);
    getJudgeData(score4);
    getJudgeData(score5);

    calcScore(score1, score2, score3, score4, score5);

    return 0;
}

void getJudgeData(double& score)
{
    cout << "Enter a judge's score: ";
    cin >> score;

    while (score < 0 || score > 10)
    {
        cout << "Judge's scores must be between 0 and 10. Please enter a valid score: ";
        cin >> score;
    }
}

void calcScore(double score1, double score2, double score3, double score4, double score5)
{
    double lowestScore = findLowest(score1, score2, score3, score4, score5);
    double highestScore = findHighest(score1, score2, score3, score4, score5);
    double average = (score1 + score2 + score3 + score4 + score5 - lowestScore - highestScore) / 3;

    cout << "The performer's final score is " << fixed << setprecision(1) << average << endl;
}

double findLowest(double score1, double score2, double score3, double score4, double score5)
{
    double lowestScore = score1;

    if (score2 < lowestScore)
        lowestScore = score2;
    if (score3 < lowestScore)
        lowestScore = score3;
    if (score4 < lowestScore)
        lowestScore = score4;
    if (score5 < lowestScore)
        lowestScore = score5;

    return lowestScore;
}

double findHighest(double score1, double score2, double score3, double score4, double score5)
{
    double highestScore = score1;

    if (score2 > highestScore)
        highestScore = score2;
    if (score3 > highestScore)
        highestScore = score3;
    if (score4 > highestScore)
        highestScore = score4;
    if (score5 > highestScore)
        highestScore = score5;

    return highestScore;
}
