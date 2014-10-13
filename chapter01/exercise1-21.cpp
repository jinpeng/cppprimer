#include <iostream>
#include "Sales_item.h"

using namespace std;
int main()
{
  cout << "Please enter 2 sales items:" << endl;
  Sales_item book1, book2;
  cin >> book1 >> book2;
  if (compareIsbn(book1, book2)) {
    cout << "The sum of the 2 sales items is: " << book1 + book2 << endl;
  } else {
    cout << "The 2 salse items must have the same ISBN." << endl;
  }
}
