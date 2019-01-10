#include <iostream>
#include <string>

using namespace std;

int main()
{
  // Brute force
  cout << "CCCCCCCCC         ++               ++" << endl;
  cout << "CC                ++               ++" << endl;
  cout << "CC          ++++++++++++++   ++++++++++++++" << endl;
  cout << "CC          ++++++++++++++   ++++++++++++++" << endl;
  cout << "CC                ++               ++" << endl;
  cout << "CCCCCCCCC         ++               ++" << endl;

  cout << endl;

  // Refactor
  string outer = "CCCCCCCCC         ++               ++ \n";
  string inner = "CC                ++               ++ \n";
  string middle = "CC          ++++++++++++++   ++++++++++++++ \n";

  cout << outer << inner << middle << middle << inner << outer;

  return 0;

}