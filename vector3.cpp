#include <iostream>
#include <vector>
using namespace std;
int main()
{
    std::vector<int> num[5] = {1, 2, 3, 4, 5};
    cout << "Element at index 0:" << num.at(0) << endl;
    cout << "Element at index 2:" << num.at(2) << endl;
    cout << "Element at index 4:" << num.at(4) << endl;

    return 0;
}