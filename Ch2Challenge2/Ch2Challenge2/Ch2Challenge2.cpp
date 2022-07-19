// Ch2Challenge2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

double a, cubedValue;

void GetUserInput();
void DisplayErrorMessage();
void DisplayValueCubed();
double CalculateCubedValue(double b);

void GetUserInput()
{
    cout << "Please enter a number: " << endl;

    cin >> a;

    cubedValue = CalculateCubedValue(a);
}

void DisplayErrorMessage()
{
    cout << "Invalid input, please try running the program again." << endl;
}

void DisplayCubedValue()
{
    cout << "Cubed Value = " << cubedValue << endl;
}

double CalculateCubedValue(double b)
{
    return pow(b, 3);
}

int main()
{
    GetUserInput();

    if (cin.fail())
    {
        DisplayErrorMessage();
        return 0;
    }

    DisplayCubedValue();
}