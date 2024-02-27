#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 100, b = 200;
    cout << "Before swap,value of a:" << a << endl;
    cout << "Before swap,value of b:" << b << endl;

    swap(a, b);
    cout << "After swap,value of a:" << a << endl;
    cout << "After swap,value of b:" << b << endl;
    return 0;
}