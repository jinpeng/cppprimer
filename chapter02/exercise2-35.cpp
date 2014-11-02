#include <iostream>

using namespace std;

int main()
{
  const int i = 42;
  auto j = i;
  const auto &k = i;
  auto *p = &i;
  const auto j2 = i, &k2 = i;

  j = 22; // should work since j is int
  k = 22; // should fail since k is reference to const int
  int anotherInt = 22;
  *p = 22; // should fail since p is pointer to const int
  p = &anotherInt; // should work since p is pointer to const int
  j2 = 22; // should fail since j2 is const int
  k2 = 22; // should fail since k2 is reference to const int
}
