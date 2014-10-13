#include <iostream>
#include "Sales_item.h"

using namespace std;
int main()
{
  cout << "Please enter more than 2 sales items:" << endl;
  Sales_item book, currBook;
  if (cin >> book) {
    while (cin >> currBook) {
      if (compareIsbn(book, currBook) || book.isbn() == "") {
        book += currBook;
      } else {
        cout << "Skip the book " << currBook
          << " because the ISBN is not the same as previous one." << endl;
      }
    }
    cout << "The sum is: " << book << endl;
  }
}
