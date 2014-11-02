#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{
  int a = 22, &r = a, *p = &a;
  auto b = a;
  decltype(a) c = 33;
  cout << "b(" << typeid(b).name() << ") and c(" << typeid(c).name() << ") are same type." << endl;
  auto d = r;
  decltype(r) e = a;
  cout << "d(" << typeid(d).name() << ") and e(" << typeid(e).name() << ") are NOT same type." << endl;
}
