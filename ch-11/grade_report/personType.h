#ifndef personType_h
#define personType_h

#include <string>

using namespace std;

class personType
{
public:
  void print() const;
  // function to output the first and last name in the form firstName lastName
  void setName(string first, string last);
  // function to set the firstName and lastName according to the parameters
  // postcondition: firstName = first, lastName = last

  string getFirstName() const;
  // function to return the first name
  // postcondition: the value of firstName is returned

  string getLastName() const;
  // function to return the last name
  // postcondition: the value of lastName is returned

  personType(string first = "", string last = "");
  // constructor

private:
  string firstName; // variable to store the first name
  string lastName;  // variable to store the last name
};

#endif