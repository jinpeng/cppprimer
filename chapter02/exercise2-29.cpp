#include <iostream>

using namespace std;

int main()
{
  int i = 0;
  int *p1, *const p2 = &i;
  const int ic = 1, &r = ic;
  const int *const p3 = &i;
  const int *p;

  i = ic;
  p1 = p3;
  p1 = &ic;
  p3 = &ic;
  p2 = p1;
  ic = *p3;
}
