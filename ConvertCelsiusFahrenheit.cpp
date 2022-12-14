/*
 Celsius  Fahrenheit
------------------------
       0        32.0
       6        42.8
      12        53.6
      18        64.4
      24        75.2
      30        86.0
      36        96.8
      42       107.6
      48       118.4
      54       129.2
      60       140.0
*/

//************************************************
// Author: Ilan Sela                             *
// Description: Converts celsius to fahrenheit   *
// Class Section: 201                            *
// Date : 10.23.20                               *
//************************************************

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototype
double fahrenheitConverter(int);

const int DEG_INCREMENT = 6;
const int DEG_START = 0;
const int DEG_END = 60;

int main()
{
    cout << setw(8) << "Celsius" << setw(12) << "Fahrenheit" << endl;
    cout << "------------------------" << endl;

    for (int i = DEG_START; i <= DEG_END; i = i + DEG_INCREMENT)
    {
        cout << setw(8) << i;
        cout << setw(12) << fixed << setprecision(1) << fahrenheitConverter(i) << endl;
    }
    return 0;
}

//************************************************
// Function to convert celsius into fahrenheit   *
//************************************************

double fahrenheitConverter(int celsius)
{
    double fahrenheit = 1.8*celsius + 32.0;
    return fahrenheit;
}