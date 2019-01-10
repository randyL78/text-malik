// Input failure program
#include <iostream>
#include <string>

using namespace std;

int main()
{
  string name;
  int age = 0;
  int weight = 0;
  double height = 0.0;

  cout << "Line 15: Enter name, age, weight, and height: ";
  cin >> name >> age >> weight >> height;
  cout << endl;

  cout << "Line 19: Name: " << name << endl;
  cout << "Line 20: Age: " << age << endl;
  cout << "Line 21: Weight: " << weight << endl;
  cout << "Line 22: Height: " << height << endl;

  return 0;
}