#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> num = {1, 2, 3, 4, 5};
    cout << "Initial vector: ";
    for (int &i : num)
    {
        cout << i << " ";
    }

    num.pop_back();
    cout << "\nUpdated vector: ";
    for (int &i : num)
    {
        cout << i << " ";
    }
    return 0;
}