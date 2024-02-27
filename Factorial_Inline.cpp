#include <iostream>
#include <conio.h>

using namespace std;

// Simple factorial Function
int factorial(int var)
{
    int fact = 1;
    for (int i = 1; i <= var; i++)
        fact = fact * i;
    return fact;
}

int main()
{
    cout << "5 Factorial Number :" << factorial(5);
    getch();
    return 0;
}