// functions peek and putback

#include <iostream>

using namespace std;

int main()
{
  char ch;

  cout << "Line 11: Enter a string: ";
  cin.get(ch);
  cout << endl;
  cout << "Line 14: After first cin.get(ch); "
       << "ch = " << ch << endl;

  cin.get(ch);
  cout << "Line 18: After second cin.get(ch); "
       << "ch = " << ch << endl;

  cin.putback(ch);
  cin.get(ch);
  cout << "Line 23: After putback and then "
       << "cin.get(ch); ch = " << ch << endl;

  ch = cin.peek();
  cout << "Line 27: After cin.peek(); ch = "
       << ch << endl;

  cin.get(ch);
  cout << "Line 31: After cin.get(ch); ch = "
       << ch << endl;

  return 0;
}