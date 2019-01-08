// Given length in inches, this program outputs the equivalent 
// length in feet and remaining inches

#include <iostream>

using namespace std;

int main()
{

    int inches;     // variable to store total inches
    
    cout << "Enter total inches and press Enter";

    cin >> inches;  // prompt user to enter a value and store it  in inches variable 

    cout << endl;

    cout << inches << " inch(es) = "; // output the value of inches and the equal sign

    cout << inches / 12 << " feet(foot) and "; 

    cout << inches % 12 << " inch(es)." << endl;

    /* code */
    return 0;
}
