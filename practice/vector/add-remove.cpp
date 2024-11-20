#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};

    // 在尾部添加元素
    vec.push_back(6);

    // 在位置 2 插入元素 10
    vec.insert(vec.begin() + 2, 10);

    // 刪除尾部元素
    vec.pop_back();

    // 刪除位置 2 的元素
    vec.erase(vec.begin() + 2);

    // 輸出內容
    for (int x : vec)
    {
        cout << x << " ";
    }

    return 0;
}
