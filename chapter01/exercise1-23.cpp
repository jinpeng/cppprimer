#include <iostream>
#include <map>

#include "Sales_item.h"

using namespace std;
int main()
{
  map<string, Sales_item> transactions;

  cout << "Please enter one or more sales items:" << endl;
  Sales_item currBook;
  while (cin >> currBook) {
    if (transactions.count((currBook.isbn()))) {
      transactions[currBook.isbn()] += currBook;
    } else {
      transactions[currBook.isbn()] = currBook;
    }
  }

  for (map<string, Sales_item>::iterator it=transactions.begin(); it!=transactions.end(); ++it)
  {
    cout << it->first << " => " << it->second << endl;
  }

}
