// *********************************
// Author: Randy Layne
//
// Program: Convert Length
// Description: converts a length given in feet and 
//      inches to centimeters
// ********************************* 

// header file
#include <iostream>
using namespace std;

// named constants
const int FEET_TO_INCHES = 12;
const double INCHES_TO_CENTIMETERS = 2.54;

int main() 
{

    // variable declarations
    int inches;
    int feet;
    int totalInches;
    double centimeters;

    cout << "Enter two integers, one for feet and one"
         << " for inches, then press return: ";
    cin >> feet >> inches;
    cout << endl;

    cout << "You entered: " << feet << " feet and "
         << inches << " inches." << endl;

    totalInches = feet * FEET_TO_INCHES + inches;
    cout << "The total inches are: " 
         << totalInches << endl;;

    centimeters = totalInches * INCHES_TO_CENTIMETERS;
    cout << "The length in centimeters is: " 
         << centimeters << endl;

    return 0;
}
