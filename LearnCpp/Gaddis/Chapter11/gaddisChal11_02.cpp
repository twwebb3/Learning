/*  Movie Profit
Modify the Movie Data program written for Programming Challenge 1 to include 
two additional members that hold the movie's production costs and first-year reve-
nues. Modify the function that displays the movie data to display the title, director, 
release year, running time, and first year's profit or loss.
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
    int productionCost;
    int firstYearRevenue;
};

void displayMovie(MovieData);

int main()
{
    MovieData movie1 = {"The Matrix", "The Wachowski Brothers", 1999, 136, 63000000, 463517383};
    MovieData movie2 = {"The Matrix Reloaded", "The Wachowski Brothers", 2003, 138, 150000000, 742128461};

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
    cout << "Production Cost: " << movie.productionCost << endl;
    cout << "First Year Revenue: " << movie.firstYearRevenue << endl;
    cout << endl;
}
