#include <iostream>
using namespace std;

int main() 
{
  double num;

  cout << "Please enter a decimal number: ";
  cin >> num;

  cout << "The nearest integer is: " 
       << static_cast<int>(num) << endl;

  return 0;
}