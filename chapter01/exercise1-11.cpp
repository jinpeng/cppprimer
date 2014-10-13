#include <iostream>

using namespace std;
int main()
{
    int left=0, right=0;
    cout << "Please enter two numbers: " << endl;
    cin >> left >> right;
    int i = left;
    if (left <= right) {
        while (i<=right)
        {
            cout << i++ << " ";
        }
        cout << endl;
    } else {
        while (i>=right)
        {
            cout << i-- << " ";
        }
        cout << endl;
    }
}
