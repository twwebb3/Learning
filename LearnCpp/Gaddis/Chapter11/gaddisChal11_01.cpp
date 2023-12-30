/*  Movie Data
Write a program that uses a structure named MovieData to store the following 
information about a movie:
Title
Director
Year Released
Running Time (in minutes)
The program should create two MovieData variables, store values in their members, 
and pass each one, in turn, to a function that displays the information about the 
movie in a clearly formatted manner.
*/

#include <iostream>
#include <string>

using namespace std;

struct MovieData
{
    string title;
    string director;
    int yearReleased;
    int runningTime;
};

void displayMovie(MovieData);

int main()
{
    MovieData movie1 = {"The Matrix", "The Wachowski Brothers", 1999, 136};
    MovieData movie2 = {"The Matrix Reloaded", "The Wachowski Brothers", 2003, 138};

    displayMovie(movie1);
    displayMovie(movie2);

    return 0;
}

void displayMovie(MovieData movie)
{
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year Released: " << movie.yearReleased << endl;
    cout << "Running Time: " << movie.runningTime << endl;
    cout << endl;
}

