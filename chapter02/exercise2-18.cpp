#include <iostream>

using namespace std;

int main()
{
  int val = 42, val2 = 100, *pval = &val;

  cout << val << " " << val2 << " " << pval << " " << *pval << " " << endl;
  pval = &val2;
  cout << val << " " << val2 << " " << pval << " " << *pval << " " << endl;
  *pval = 2500;
  cout << val << " " << val2 << " " << pval << " " << *pval << " " << endl;

}
