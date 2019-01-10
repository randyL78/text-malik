#include <iostream>
#include <string>

using namespace std;

int main()
{
  string name;
  double studyHours;

  cout << "Enter your name: ";
  cin >> name;

  cout << "Enter the number of study numbers: ";
  cin >> studyHours;

  cout << "Hello, " << name << "! On Saturday, you need to study " 
       << studyHours << " hours for the exam." << endl;

  return 0;
}