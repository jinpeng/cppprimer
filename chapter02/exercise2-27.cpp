#include <iostream>

using namespace std;

int main()
{
  //int i = -1, &r = 0;
  int i2 = 1;
  int *const p2 = &i2;
  const int i = -1, &r = 0;
  const int *const p3 = &i2;
  const int *p1 = &i2;
  const int &const r2;
  const int i2 = i, &r = i;
}
