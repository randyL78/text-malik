// demonstrate String operations
#include <iostream>
#include <string>

using namespace std;

int main()
{
  string name = "William Jacob";
  string str1, str2, str3, str4;

  cout << "Name: " << name << endl;

  str1 = "Hello There";
  cout << "Str1: " << str1 << endl;

  str2 = str1;
  cout << "Str2: " << str2 << endl;

  str1 = "Sunny";
  str2 = str1 + " day";
  cout << "Str2: " << str2 << endl;

  str1 = "Hello";
  str2 = "There";
  str3 = str1 + " " + str2;
  cout << "Str3: " << str3 << endl;

  
  return 0;
}