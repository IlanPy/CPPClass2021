/*
Welcome to the Candy Shopping calculator.
What is the number of bags of candy you plan to buy this year? -2
A negative number of bags is not allowed.
What is the number of bags of candy you plan to buy this year? 6

What is the average cost of a bag of candy at the store? 0.33
You must enter at least $1. Candy is not that cheap.
What is the average cost of a bag of candy at the store? 6.99

 Bags          Total Costs
--------------------------
    1               $6.99
    2               $13.98
    3               $20.97
    4               $27.96
    5               $34.95
    6               $41.94
*/    

/*
Author: Ilan Sela
Description: Calculate the cost of price per bag.
Class Section: 201
Date : 10.8.20
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const string INPUT_BAGS_MSG = "What is the number of bags of candy you plan to buy this year? ";
const string WELCOME_MSG = "Welcome to the Candy Shopping calculator.";
const string BAGS_ERROR_MSG = "A negative number of bags is not allowed.";
const string INPUT_PRICE_MSG = "What is the average cost of a bag of candy at the store? ";
const string PRICE_ERROR_MSG = "You must enter at least $1. Candy is not that cheap.";
const double MIN_CANDY_COST = 1.0;

int main()
{
    int bags; double price;
    cout << WELCOME_MSG << endl;

    do 
    {
        cout << INPUT_BAGS_MSG;
        cin >> bags;
        if (bags < 0)
        {
            cout << BAGS_ERROR_MSG << endl;
        }
    }   while (bags < 0);

    cout << endl;
    do 
    {
        cout << INPUT_PRICE_MSG;
        cin >> price;
        if (price < MIN_CANDY_COST)
        {
            cout << PRICE_ERROR_MSG << endl;
        }
    }   while (price < MIN_CANDY_COST);

    cout << endl << setw(5) << "Bags" << setw(22) << "Total Costs\n";
    cout << "--------------------------\n";

    for (int counter = 1; counter <= bags; counter++)
    {
        double totalCost = (counter*price);
        cout << setw(5) << counter;
        cout << setw(16) << "$" << totalCost << endl;
    }
}
