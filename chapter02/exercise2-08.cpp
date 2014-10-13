#include <iostream>

using namespace std;

int main()
{
  string s = "2M\n";
  string s1 = "\62\x4D\n";
  string s2 = "2\tM\n";
  cout << s << endl;
  cout << s1 << endl;
  cout << s2 << endl;
}
