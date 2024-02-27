#include <iostream>
using namespace std;
int fib(int n)
{
    if (n < 2)
        return 1;
    else
        return fib(n - 2) + fib(n - 1);
}
int main()
{
    int x;
    cout << "Enter the number:" << endl;
    cin >> x;
    cout << "The fibonacci sequence at position" << x << "is:" << fib(x) << endl;
    return 0;
}