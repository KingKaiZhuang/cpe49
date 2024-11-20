#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};

    // 大小和是否為空
    cout << "Size: " << vec.size() << endl;
    cout << "Is empty: " << (vec.empty() ? "Yes" : "No") << endl;

    // 訪問元素
    cout << "First element: " << vec.front() << endl;
    cout << "Last element: " << vec.back() << endl;
    cout << "Element at index 2: " << vec.at(2) << endl;

    // 清空 vector
    vec.clear();
    cout << "Size after clear: " << vec.size() << endl;

    return 0;
}
