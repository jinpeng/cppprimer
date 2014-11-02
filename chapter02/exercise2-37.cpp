#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
  int a = 3, b = 4;
  decltype(a) c = a;
  decltype(a = b) d = a;

  cout << typeid(a).name() << " a= " << a << endl;
  cout << typeid(a).name() << " b= " << b << endl;
  cout << typeid(a).name() << " c= " << c << endl;
  cout << typeid(a).name() << " d= " << d << endl;
}
