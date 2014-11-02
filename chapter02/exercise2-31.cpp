#include <iostream>

using namespace std;

int main()
{
  const int v2 = 0;
  int v1 = v2;
  int *p1 = &v1, &r1 = v1;
  int i = 1;
  const int *p2 = &v2, *const p3 = &i, &r2 = v2;

  r1 = v2; //legal, top-level const ignored
  p1 = p2; //illegal, low-level const mismatch
  p2 = p1; //legal, non-const coverted to const, low-level const
  p1 = p3; //illegal, low-level const mismatch
  p2 = p3; //legal, top-level const ignored
}
