// Ch2Challenge1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

double a, b, c, sum, average;

void GetUserInput();
void DisplayErrorMessage();
void DisplaySum();
void DisplayAverage();
double CalculateSum(double d, double e, double f);
double CalculateAverage(double g, double h, double i);

void GetUserInput()
{
    cout << "Please enter 3 numbers, each separated by a space or a new line (by pressing enter): " << endl;

    cin >> a >> b >> c;
    
    sum = CalculateSum(a, b, c);
    average = CalculateAverage(a, b, c);
}

void DisplayErrorMessage()
{
    cout << "Invalid input, please try running the program again." << endl;
}

void DisplaySum()
{
    cout << "Sum = " << sum << endl;
}

void DisplayAverage()
{
    cout << "Average = " << average << endl;
}

double CalculateSum(double d, double e, double f)
{
    return d + e + f;
}

double CalculateAverage(double g, double h, double i)
{
    return (g + h + i) / 3;
}

int main()
{
    GetUserInput();

    if (cin.fail())
    {
        DisplayErrorMessage();
        return 0;
    }

    DisplaySum();
    DisplayAverage();
}