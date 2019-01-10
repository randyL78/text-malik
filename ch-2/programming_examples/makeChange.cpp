// ********************************************************
// author: Randy Layne
//
// program: makeChange
// description: takes an input of cents and converts it to
// half dollars, quarters, dimes, nickles, and pennies
// ********************************************************

#include <iostream>

using namespace std;

const int HALF_DOLLAR = 50;
const int QUARTER = 25;
const int DIME = 10;
const int NICKLE = 5;

int main()
{
  // variables
  int pennies;

  // prompt user to input number of cents
  cout << "Enter total number of cents and press enter: ";
  cin >> pennies;
  cout << endl;

  // echo input
  cout << "You entered " << pennies << " cents." << endl;

  // calculate and output each denomination
  cout << pennies / HALF_DOLLAR << " Half dollars, ";
  pennies %= HALF_DOLLAR;
  
  cout << pennies / QUARTER << " quarters, ";
  pennies %= QUARTER;

  cout << pennies / DIME << " dimes, ";
  pennies %= DIME;

  cout << pennies / NICKLE <<  " nickles, and ";
  pennies %= NICKLE;

  cout << pennies << " pennies." << endl;

  return 0;
}