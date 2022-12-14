/*
1. Write a function named dogYears that takes a person’s age as the parameter and returns their age in dog years
(which is their age times seven).
*/

//************************************************
// Author: Ilan Sela                             *
// Description: Multiple different functions     *
// Class Section: 201                            *
// Date : 10.28.20                               *
//************************************************

int dogYears(int age)
{
    return age*7;
}

2. Write a function named isMultiple that takes two integer parameters. It should return true if the first number is a
multiple of the second number. (Example: if the passed in values are 8 and 4, the function should return true because 8
is a multiple of 4. If the passed in values are 15 and 9, the function should return false.)

bool isMultiple(int first, int second)
{
    return (first % second == 0);
}

3. Write a function named makeSquare that takes a parameter named side and creates a square of asterisks of that size.
(Example: if the value of 3 is passed in for side, the function would display:
***
***
***

void makeSquare(int side)
{
    for (int i=0; i < side; i++)
    {
        for (int i = 1; i <= side; i++)
        {
            cout << "*";
            if (i == side)
            {
                cout << endl;
            }
	}
    }
	
}	

4. Write a function named anyDieRoll that takes a parameter for the number of sides on a die. If no value is sent into
the function, it should default to a value of 6. Return a random number that simulates rolling the die. (Example: if the
user calls the function like this: anyDieRoll() then the function will return a value in the range 1-6. If the user calls the
function like this: anyDieRoll(20), then the function will return a value in the range 1-20.) You do not need to use
srand(time(0)) in your function. Assume it has already been called.

int anyDieRoll(int range = 6);

int anyDieRoll(int range /*=6*/)
{
	return (rand() % range + 1);
}