// Input failure and the clear function

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

  cin.clear();
  cin.ignore(200, '\n');

  cout << "\nLine 27: Enter name, age, weight, and height: ";
  cin >> name >> age >> weight >> height;
  cout << endl;

  cout << "Line 31: Name: " << name << endl;
  cout << "Line 32: Age: " << age << endl;
  cout << "Line 33: Weight: " << weight << endl;
  cout << "Line 34: Height: " << height << endl;

  return 0;
}