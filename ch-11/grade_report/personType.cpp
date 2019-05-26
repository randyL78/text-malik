#include "personType.h"

#include <iostream>
#include <string>

using namespace std;

void personType::print() const
{
  cout << firstName << " " << lastName;
} // end print

void personType::setName(string first, string last)
{
  firstName = first;
  lastName = last;
} // end setName

string personType::getFirstName() const
{
  return firstName;
} // end getFirstName

string personType::getLastName() const
{
  return lastName;
} // end getLastName

// constructor
personType::personType(string first, string last)
{
  setName(first, last);
}
