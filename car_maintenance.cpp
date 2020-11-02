#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

void carMaintence(){
   system("color 0A");
   int miles;

cout << "Miles on Odometer Currently:";
cin >> miles;


while (cin.fail())
{
    cin.clear();
    cin.ignore();
    cout << "Please enter a valid input" << endl;
    cin >> miles;
}

    if (miles == 0 || miles < 30000) {
        cout << "The car is pretty new, continue general maintance" << endl;
        system("pause");
    }

        else if (miles < 30000)
        {
            cout << "Change Air Filter" << endl;
            cout << "Change Fuel Filter" << endl;
            system("pause");
        }

            else if (miles > 30000 && miles < 60000) {
                cout << "Check Battery" << endl;
                cout << "Check Break Fluid" << endl;
                cout << "Check Break Pads" << endl;
                cout << "Check Break Rotors" << endl;
                cout << "Replace Tranmission Fluid" << endl;
                system("pause");
            }

                else if (miles > 60000 && miles < 90000) {
                    cout << "Change Car Hoses" << endl;
                    cout << "Replace Power Steering Fluid" << endl;
                    cout << "Replace Timing Belt" << endl;
                    system("pause");
                }
}

void OilCheck() {
    system("color 0A");
    int miles;
    int oilType; 

    cout << "How many miles since last oil change:";
    cin >> miles;
    cout << "Press the number corresponding to the type of motor oil used and press enter:" << endl;
    cout << "1. FULL SYNTHETIC MOTOR OIL " << "2. SYNTHETIC BLEND MOTOR OIL " << "3. CONVENTIONAL MOTOR OIL " << "4. HIGH MILEAGE MOTOR OIL " << endl;
    cin >> oilType; 
    

    while (cin.fail())
    {
        cin.clear();
        cin.ignore();
        cout << "Please re-enter the miles since last oil change and number corresponding with oil type used" << endl;
        cin >> miles;
        cin >> oilType;
    }

    switch (oilType) {
        case 1:
            if (miles <= 5000) {
                cout << "No need to change oil yet." << endl;
                system("pause");
                break;
            }
            else if (miles > 5000 && miles <= 7500) {
                cout << "Consider getting an oil change" << endl;
                system("pause");
                break;
            }
            else if (miles > 7500) {
                cout << "Change oil as soon as possible" << endl;
                system("pause");
                break;
            }
        case 2:
            if (miles <= 5000) {
                cout << "No need to change oil yet." << endl;
                system("pause");
                break;
            }
            else if (miles > 5000 && miles <= 7500) {
                cout << "Consider getting an oil change" << endl;
                system("pause");
                break;
            }
            else if (miles > 7500) {
                cout << "Change oil as soon as possible" << endl;
                system("pause");
                break;
            }
        case 3:
            if (miles <= 5000) {
                cout << "No need to change oil yet." << endl;
                system("pause");
                break;
            }
            else if (miles > 5000 && miles <= 7500) {
                cout << "Consider getting an oil change" << endl;
                system("pause");
                break;
            }
            else if (miles > 7500) {
                cout << "Change oil as soon as possible" << endl;
                system("pause");
                break;
            }
        case 4:
            if (miles <= 5000) {
                cout << "No need to change oil yet." << endl;
                system("pause");
                break;
            }
            else if (miles > 5000 && miles <= 7500) {
                cout << "Consider getting an oil change" << endl;
                system("pause");
                break;
            }
            else if (miles > 7500) {
                cout << "Change oil as soon as possible" << endl;
                system("pause");
                break;
            }

    }

    //if (oilType == "Synthetic") {
    //    if (miles <= 5000) {
    //        cout << "No need to change oil yet." << endl;
    //        system("pause");
    //    }
    //    else if (miles > 5000 && miles <= 7500) {
    //        cout << "Consider getting an oil change" << endl;
    //        system("pause");
    //    }
    //    else if (miles > 7500) {
    //        cout << "Change oil as soon as possible" << endl;
    //        system("pause");
    //    }
    //    
    //}

}


int main()
{
    OilCheck();
    //carMaintence();
    return 0;
}
