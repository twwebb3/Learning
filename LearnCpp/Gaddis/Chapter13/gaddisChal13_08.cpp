/*  TestScores Class
Design a TestScores class that has member variables to hold three test scores. The 
class should have a constructor, accessor, and mutator functions for the test score 
fields, and a member function that returns the average of the test scores. Demonstrate 
the class by writing a separate program that creates an instance of the class. The 
program should ask the user to enter three test scores, which are stored in the 
TestScores object. Then the program should display the average of the scores, as reported 
by the Testscores object.
*/

#include <iostream>
#include <string>

using namespace std;

class TestScores
{
private:
    double score1;
    double score2;
    double score3;
public:
    TestScores(double s1, double s2, double s3)
    {
        score1 = s1;
        score2 = s2;
        score3 = s3;
    }
    void setScore1(double s1)
    {
        score1 = s1;
    }
    void setScore2(double s2)
    {
        score2 = s2;
    }
    void setScore3(double s3)
    {
        score3 = s3;
    }
    double getScore1()
    {
        return score1;
    }
    double getScore2()
    {
        return score2;
    }
    double getScore3()
    {
        return score3;
    }
    double getAverage()
    {
        return (score1 + score2 + score3) / 3;
    }
};

int main()
{
    double score1, score2, score3;

    cout << "Enter the first test score: ";
    cin >> score1;
    cout << "Enter the second test score: ";
    cin >> score2;
    cout << "Enter the third test score: ";
    cin >> score3;

    TestScores testScores(score1, score2, score3);

    cout << "The average of the test scores is " << testScores.getAverage() << endl;

    return 0;
}
