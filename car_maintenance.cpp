#include <iostream>
#include <windows.h>

using namespace std;

void carMaintence ()
{
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



        if(miles < 30,000)
        {
          cout << "Change Air Filter" << endl; 
            cout << "Change Fuel Filter" << endl; 
        }

        else if (miles > 30,000 && miles < 60,000){
          cout << "Check Battery" << endl;
           cout << "Check Break Fluid" << endl;
            cout << "Check Break Pads" << endl; 
             cout << "Check Break Rotors" << endl;
              cout << "Change Tranmission Fluid" << endl; 
                 
        }
    

}

int main ()
{
  system("color 0A");
  system("pause");
  carMaintence ();
  


  return 0;
}
