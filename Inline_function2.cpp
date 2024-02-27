#include <iostream>
using namespace std;
class operation
{
    int a, b, add, sub, mul;
    float div;

public:
    void get();
    void sum();
    void difference();
    void product();
    void divison();
};
inline void operation::get()
{
    cout << "Enter the first value: " << a << endl;
    cout << "Enter the second value: " << b << endl;
}
inline void operation::sum()
{
    add = a + b;
    cout << "Addition of two numbers: " << add << endl;
}
inline void operation::difference()
{
    sub = a - b;
    cout << "Difference of two numbers: " << sub << endl;
}
inline void operation::product()
{
    mul = a * b;
    cout << "Product of two numbers: " << mul << endl;
}
inline void operation::divison()
{
    div = a / b;
    cout << "Division of two numbers " << div << endl;
}

int main()
{
    cout << "Program using inline functions:\n";
    operation s;
    s.get();
    s.sum();
    s.difference();
    s.product();
    s.divison();
    return 0;
}