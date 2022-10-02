/*
Welcome to the Dive Judging Calculator!
Please enter the five judging scores for the dive:
Dive 1: 6.5
Dive 2: 7
Dive 3: 5.5
Dive 4: 7
Dive 5: 6

The results are in! Here were the 5 judges scores: 6.5 7 5.5 7 6 
The highest score of 7 and the lowest score of 5.5 were dropped.
The raw score for this dive is: 19.5
*/

//************************************************
// Author: Ilan Sela                             *
// Description: Calculates raw score for a dive  *
// Class Section: 201                            *
// Date : 11.9.20                                *
//************************************************

#include <iostream>
using namespace std;

const int SIZE = 5;

int main()
{
    double dive_scores[SIZE];
    double highest;
    double lowest;
    double sum = 0;

    cout << "Welcome to the Dive Judging Calculator!" << endl;
    cout << "Please enter the five judging scores for the dive:" << endl;

    for(int i = 0; i < SIZE; i++)
    {
        cout << "Dive " << i+1 << ": ";
        cin >> dive_scores[i];
    }

    highest = dive_scores[0];
    lowest = dive_scores[0];

    for (int i = 1; i < SIZE; i++)
    {
        // Following is to find highest score
        if (dive_scores[i] > highest)
            highest = dive_scores[i];

        // Following is to find lowest score
        if (dive_scores[i] < lowest)
            lowest = dive_scores[i];
    }

    cout  << endl << "The results are in! Here were the " << SIZE << " judges scores: ";

    // Following calculates raw score
    for (int i = 0; i < SIZE; i++)
    {
        sum += dive_scores[i];
        cout << dive_scores[i] << " ";
    }
    sum -= (highest + lowest);

    // Output message
    cout  << endl << "The highest score of " << highest << " and the lowest score of " << lowest;
    cout << " were dropped." << endl << "The raw score for this dive is: " << sum << endl;
    
}