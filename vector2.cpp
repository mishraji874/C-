#include <iostream>
#include <vector>
using namespace std;
int main()
{
    std::vector<int> num = {1, 2, 3, 4, 5};
    cout << "Initial vector: ";
    for (const int &i : num)
    {
        cout << i << " ";
    }
    num.push_back(6);
    num.push_back(7);
    cout << "\nUpdated vector: ";
    for (const int &i : num)
    {
        cout << i << " ";
    }
    return 0;
}