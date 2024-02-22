/*  Trivia Game
In this programming challenge you will create a simple trivia game for two players.
The program will work like this:

• Starting with player 1, each player gets a turn at answering five trivia questions.
  (There are a total of 10 questions.) When a question is displayed, four possible 
  answers are also displayed. Only one of the answers is correct, and if the player 
  selects the correct answer he or she earns a point.
• After answers have been selected for all of the questions, the program displays the 
  number of points earned by each player and declares the player with the highest number 
  of points the winner.

In this program you will design a Question class to hold the data for a trivia ques-tion. 
The Question class should have member variables for the following data:
• A trivia question
• Possible answer #1
• Possible answer #2
• Possible answer #3
• Possible answer #4
• The number of the correct answer (1, 2, 3, or 4)

The Question class should have appropriate constructors), accessor, and mutator functions.
The program should create an array of 10 Question objects, one for each trivia ques-tion. 
Make up your own trivia questions on the subject or subjects of your choice for the objects.
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Question
{
private:
    string triviaQuestion;
    string answer1;
    string answer2;
    string answer3;
    string answer4;
    int correctAnswer;
public:
    Question()
    {
        triviaQuestion = "";
        answer1 = "";
        answer2 = "";
        answer3 = "";
        answer4 = "";
        correctAnswer = 0;
    }
    void setTriviaQuestion(string q)
    {
        triviaQuestion = q;
    }
    void setAnswer1(string a)
    {
        answer1 = a;
    }
    void setAnswer2(string a)
    {
        answer2 = a;
    }
    void setAnswer3(string a)
    {
        answer3 = a;
    }
    void setAnswer4(string a)
    {
        answer4 = a;
    }
    void setCorrectAnswer(int a)
    {
        correctAnswer = a;
    }
    string getTriviaQuestion()
    {
        return triviaQuestion;
    }
    string getAnswer1()
    {
        return answer1;
    }
    string getAnswer2()
    {
        return answer2;
    }
    string getAnswer3()
    {
        return answer3;
    }
    string getAnswer4()
    {
        return answer4;
    }
    int getCorrectAnswer()
    {
        return correctAnswer;
    }
};

int main()
{
    Question trivia[10];
    int player1Score = 0;
    int player2Score = 0;
    int answer;
    string player1;
    string player2;

    trivia[0].setTriviaQuestion("What is the capital of France?");
    trivia[0].setAnswer1("Paris");
    trivia[0].setAnswer2("London");
    trivia[0].setAnswer3("Rome");
    trivia[0].setAnswer4("Berlin");
    trivia[0].setCorrectAnswer(1);

    trivia[1].setTriviaQuestion("What is the capital of Italy?");
    trivia[1].setAnswer1("Paris");
    trivia[1].setAnswer2("London");
    trivia[1].setAnswer3("Rome");
    trivia[1].setAnswer4("Berlin");
    trivia[1].setCorrectAnswer(3);

    trivia[2].setTriviaQuestion("What is the capital of Germany?");
    trivia[2].setAnswer1("Paris");
    trivia[2].setAnswer2("London");
    trivia[2].setAnswer3("Rome");
    trivia[2].setAnswer4("Berlin");
    trivia[2].setCorrectAnswer(4);

    trivia[3].setTriviaQuestion("What is the capital of England?");
    trivia[3].setAnswer1("Paris");
    trivia[3].setAnswer2("London");
    trivia[3].setAnswer3("Rome");
    trivia[3].setAnswer4("Berlin");
    trivia[3].setCorrectAnswer(2);

    trivia[4].setTriviaQuestion("What is the capital of Spain?");
    trivia[4].setAnswer1("Paris");
    trivia[4].setAnswer2("London");
    trivia[4].setAnswer3("Rome");
    trivia[4].setAnswer4("Madrid");
    trivia[4].setCorrectAnswer(4);

    trivia[5].setTriviaQuestion("What is the capital of Portugal?");
    trivia[5].setAnswer1("Paris");
    trivia[5].setAnswer2("Lisbon");
    trivia[5].setAnswer3("Rome");
    trivia[5].setAnswer4("Berlin");
    trivia[5].setCorrectAnswer(2);

    trivia[6].setTriviaQuestion("What is the capital of Greece?");
    trivia[6].setAnswer1("Athens");
    trivia[6].setAnswer2("London");
    trivia[6].setAnswer3("Rome");
    trivia[6].setAnswer4("Berlin");
    trivia[6].setCorrectAnswer(1);

    trivia[7].setTriviaQuestion("What is the capital of Russia?");
    trivia[7].setAnswer1("Paris");
    trivia[7].setAnswer2("London");
    trivia[7].setAnswer3("Moscow");
    trivia[7].setAnswer4("Berlin");
    trivia[7].setCorrectAnswer(3);

    trivia[8].setTriviaQuestion("What is the capital of China?");
    trivia[8].setAnswer1("Paris");
    trivia[8].setAnswer2("London");
    trivia[8].setAnswer3("Rome");
    trivia[8].setAnswer4("Beijing");
    trivia[8].setCorrectAnswer(4);

    trivia[9].setTriviaQuestion("What is the capital of Japan?");
    trivia[9].setAnswer1("Paris");
    trivia[9].setAnswer2("Tokyo");
    trivia[9].setAnswer3("Rome");
    trivia[9].setAnswer4("Berlin");
    trivia[9].setCorrectAnswer(2);

    cout << "Player 1, enter your name: ";
    cin >> player1;
    cout << "Player 2, enter your name: ";
    cin >> player2;

    for (int i = 0; i < 5; i++)
    {
        cout << "Question " << (i + 1) << ": " << trivia[i].getTriviaQuestion() << endl;
        cout << "1. " << trivia[i].getAnswer1() << endl;
        cout << "2. " << trivia[i].getAnswer2() << endl;
        cout << "3. " << trivia[i].getAnswer3() << endl;
        cout << "4. " << trivia[i].getAnswer4() << endl;
        cout << "Enter your answer: ";
        cin >> answer;
        if (answer == trivia[i].getCorrectAnswer())
        {
            player1Score++;
        }
        cout << endl;
    }

    for (int i = 5; i < 10; i++)
    {
        cout << "Question " << (i + 1) << ": " << trivia[i].getTriviaQuestion() << endl;
        cout << "1. " << trivia[i].getAnswer1() << endl;
        cout << "2. " << trivia[i].getAnswer2() << endl;
        cout << "3. " << trivia[i].getAnswer3() << endl;
        cout << "4. " << trivia[i].getAnswer4() << endl;
        cout << "Enter your answer: ";
        cin >> answer;
        if (answer == trivia[i].getCorrectAnswer())
        {
            player2Score++;
        }
        cout << endl;
    }

    cout << player1 << " scored " << player1Score << " points." << endl;
    cout << player2 << " scored " << player2Score << " points." << endl;

    if (player1Score > player2Score)
    {
        cout << player1 << " wins!" << endl;
    }
    else if (player2Score > player1Score)
    {
        cout << player2 << " wins!" << endl;
    }
    else
    {
        cout << "It's a tie!" << endl;
    }

    return 0;
}
