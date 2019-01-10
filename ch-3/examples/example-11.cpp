// Example: setprecision, fixed, and showpoint
#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.14159265;

int main()
{
  double radius = 12.67;
  double height = 12.00;

  cout << fixed << showpoint;

  cout << setprecision(2)
       << "Line 17: setprecision(2)" << endl;
  cout << "Line 18: radius = " << radius << endl;
  cout << "Line 19: height = " << height << endl;
  cout << "Line 20: volume = " << PI * radius * radius * height << endl;
  cout << "Line 21: PI = " << PI << endl << endl;

  cout << setprecision(3)
       << "Line 24: setprecision(3)" << endl;
  cout << "Line 25: radius = " << radius << endl;
  cout << "Line 26: height = " << height << endl;
  cout << "Line 27: volume = " << PI * radius * radius * height << endl;
  cout << "Line 28: PI = " << PI << endl << endl;

  cout << setprecision(4)
       << "Line 31: setprecision(4)" << endl;
  cout << "Line 32: radius = " << radius << endl;
  cout << "Line 33: height = " << height << endl;
  cout << "Line 34: volume = " << PI * radius * radius * height << endl;
  cout << "Line 35: PI = " << PI << endl << endl;

  cout << "Line 37: "
       << setprecision(3) << radius << ", "
       << setprecision(2) << height << ", "
       << setprecision(5) << PI << endl;

  return 0;
}