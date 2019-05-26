#ifndef circleType_H
#define circleType_H

class circleType
{
public:
  void setRadius(double r);
  // sets the radius of the circle
  // Postcondition: if (r >== 0) radius = r;
  //                otherwise radius = 0;

  double getRadius();
  // get the radius of the circle
  // Postcondition: The value of r is returned

  double area();
  // return the area of the circle
  // Postcondition: area is calculated and returned

  double circumference();
  // return the circumference of the circle
  // Postcondition: circumference is calculated and returned

  circleType(double r = 0);
  // constructor with default parameter
  // Postcondition: radius = r;
private:
  double radius;
};

#endif