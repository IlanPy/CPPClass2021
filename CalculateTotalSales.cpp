/*
Enter the sales for Snickers: 10
Enter the sales for Reece's Pieces: 40
Enter the sales for Twizzlers: 30
Enter the sales for Nerds: 5
Enter the sales for Mini Hershy bars: 20

      Candy Name     Candy Sales
---------------------------------
        Snickers              10
  Reece's Pieces              40
       Twizzlers              30
           Nerds               5
Mini Hershy bars              20

Total Sales: 105
Highest selling candy: Reece's Pieces
Lowest selling candy: Nerds
*/

//************************************************
// Author: Ilan Sela                             *
// Description: Calculates the total sales,      *
// the highest and lowest selling products.      *
// Class Section: 201                            *
// Date : 11.9.20                                *
//************************************************

#include <iostream>
#include <iomanip>

using namespace std;

const int SIZE = 5;

int total(int[], int);
int highest(int[], int);
int lowest(int[], int);

int main()
{
    string candy_types[] = {"Snickers", "Reece's Pieces", "Twizzlers", "Nerds", "Mini Hershy bars"};
    int candy_sales[SIZE] = {};

    for(int i = 0; i < SIZE; i++)
    {
        cout << "Enter the sales for " << candy_types[i] << ": ";
        cin >> candy_sales[i];
        
        if(candy_sales[i] < 0)
        {
            cout << endl << "There's no way its negative! Try again." << endl << endl;
            i -= 1;
        }       
    }

// Formatted output

    cout << endl << setw(16) << "Candy Name" << setw(16) << "Candy Sales" << endl;
    cout << "---------------------------------" << endl;
    for (int i = 0; i < SIZE; i++)
        cout << right << setw(16) << candy_types[i] << right << setw(16) << candy_sales[i] << endl;
    cout << endl << "Total Sales: " << total(candy_sales, SIZE) << endl;
    cout << "Highest selling candy: " << candy_types[highest(candy_sales, SIZE)] << endl;
    cout << "Lowest selling candy: " << candy_types[lowest(candy_sales, SIZE)] << endl;
}

// Function for total sales

int total(int candy_sales[], int candy_sales_size)
{
    int sales_total = 0;
    for(int i = 0; i < candy_sales_size; i++)
    {
        sales_total += candy_sales[i];
    }
    return sales_total;
}

// Function for highest selling candy

int highest(int candy_sales[], int candy_sales_size)
{
    int sales_highest = 0;
    for(int i = 1; i < candy_sales_size; i++)
    {
        if (candy_sales[sales_highest] < candy_sales[i])
        sales_highest = i;
    }
    return sales_highest;
}

// Function for lowest selling candy

int lowest(int candy_sales[], int candy_sales_size)
{
    int sales_lowest = 0;
    for(int i = 1; i < candy_sales_size; i++)
    {
        if (candy_sales[sales_lowest] > candy_sales[i])
        sales_lowest = i;
    }
    return sales_lowest;
}