#include <iostream>

using namespace std;

int main()
{
  cout << "Please enter several numbers: " << endl;
  int value = 0, sum = 0;
  while (cin >> value)
  {
    sum += value;
  }
  cout << "The sum is: " << sum << endl;
}
