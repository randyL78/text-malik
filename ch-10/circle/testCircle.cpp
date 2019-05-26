// User program to test circleType class

#include <iostream>
#include <iomanip>
#include "circleType.h"

using namespace std;

int main()
{

  circleType circle1(8);
  circleType circle2;

  double radius;

  cout << fixed << showpoint << setprecision(2);

  cout << "Circle 1 radius: " << circle1.getRadius()
       << ", area: " << circle1.area() << ", circumference: "
       << circle1.circumference() << endl;

  cout << "Circle 2 radius: " << circle2.getRadius()
       << ", area: " << circle2.area() << ", circumference: "
       << circle2.circumference() << endl;

  cout << "Enter radius: ";
  cin >> radius;
  cout << endl;

  circle2.setRadius(radius);

  cout << "After setting the radius." << endl;
  cout << "Circle 2 radius: " << circle2.getRadius()
       << ", area: " << circle2.area() << ", circumference: "
       << circle2.circumference() << endl;

  return 0;
}