#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> num = {1, 2, 3, 4, 5};
    cout << "Initial vector: ";
    for (const int &i : num)
    {
        cout << i << " ";
    }
    num.at(1) = 9;
    num.at(3) = 7;

    cout << "\nUpdated vector: ";
    for (const int &i : num)
    {
        cout << i << " ";
    }
    return 0;
}