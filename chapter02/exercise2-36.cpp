#include <iostream>

using namespace std;

int main()
{
  int a = 3, b = 4;
  decltype(a) c = a;
  decltype((b)) d = a;
  ++c;
  ++d;

  cout << "a= " << a << endl;
  cout << "b= " << b << endl;
  cout << "c= " << c << endl;
  cout << "d= " << d << endl;
}
