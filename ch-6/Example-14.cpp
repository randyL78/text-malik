// Reference and value parameters

#include <iostream>

using namespace std;

// function prototypes
void funOne(int a, int &b, char v);
void funTwo(int &x, int y, char &w);

// entry point
int main()
{
  int num1 = 10;
  int num2 = 15;
  char ch = 'A';

  cout << "Inside main: num1 = " << num1 << ", num2 = " << num2
       << ", and ch = " << ch << endl;

  funOne(num1, num2, ch);

  cout << "After funOne: num1 = " << num1 << ", num2 = " << num2
       << ", and ch = " << ch << endl;

  funTwo(num1, num2, ch);

  cout << "After funTwo: num1 = " << num1 << ", num2 = " << num2
       << ", and ch = " << ch << endl;

  return 0;
}

// function declarations
void funOne(int a, int &b, char v)
{
  int one = a;
  a++;
  b = b * 2;
  v = 'B';

  cout << "Inside funOne: a = " << a << ", b = " << b
       << ", v = " << v << ", and one = " << one << endl;
}

void funTwo(int &x, int y, char &w)
{
  x++;
  y = y * 2;
  w = 'G';

  cout << "Inside funTwo: x = " << x << ", y = " << y
       << ", and w = " << w << endl;
}