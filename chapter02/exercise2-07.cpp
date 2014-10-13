#include <iostream>

using namespace std;

int main()
{
  string s = "Who goes with F\145rgus?\012";
  long double ld_value = 3.14e1L;
  float f_value = 1024f;
  long double ld_value2 = 3.14L;

  cout << s << endl;
  cout << ld_value << endl;
  cout << f_value << endl;
  cout << ld_value2 << endl;
}
