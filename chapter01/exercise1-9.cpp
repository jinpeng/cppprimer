#include <iostream>

using namespace std;
int main()
{
    int i=50, sum=0;
    while (i<=100)
    {
        sum += i++;
    }
    cout << "Sum of numbers from 50 to 100 is: " << sum << endl;
}
