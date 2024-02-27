#include <iostream>
using namespace std;
int main()
{
    int n, i = 2;
    cin >> n;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "Not Prime Number" << i << endl;
        }

        else
        {
            cout << "Prime number" << endl;
        }
    }
    return 0;
}