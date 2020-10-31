#include <iostream>

#include <windows.h>

#include <string>

using namespace std;

void carMaintence()
{
    int miles;
    system("color 0A");

    cout << "Miles on Odometer Currently:";
    cin >> miles;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore();
        cout << "Please enter a valid input" << endl;
        cin >> miles;
    }

    if (miles == 0 || miles > 30000)
    {
        cout << "The car is pretty new, continue general maintance" << endl;
        system("pause");
    }
    else if (miles < 30000)
    {
        cout << "Change Air Filter" << endl;
        cout << "Change Fuel Filter" << endl;
        system("pause");
    }
    else if (miles > 30000 && miles < 60000)
    {
        cout << "Check Battery" << endl;
        cout << "Check Break Fluid" << endl;
        cout << "Check Break Pads" << endl;
        cout << "Check Break Rotors" << endl;
        cout << "Replace Tranmission Fluid" << endl;
        system("pause");
    }
    else if (miles > 60000 && miles < 90000)
    {
        cout << "Change Car Hoses" << endl;
        cout << "Replace Power Steering Fluid" << endl;
        cout << "Replace Timing Belt" << endl;
        system("pause");
    }
}

int main()
{
    carMaintence();
    return 0;
}