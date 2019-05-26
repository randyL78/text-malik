// implements the circleType
#include "circleType.h"

void circleType::setRadius(double r)
{
  if (r >= 0)
    radius = r;
  else
    radius = 0;
}

double circleType::getRadius()
{
  return radius;
}

double circleType::area()
{
  return 3.14159 * radius * radius;
}

double circleType::circumference()
{
  return 3.14159 * 2 * radius;
}

circleType::circleType(double r)
{
  setRadius(r);
}