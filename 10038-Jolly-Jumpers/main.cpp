#include <iostream>
#include <cmath>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int n; // 數列的長度

    while (cin >> n)
    {
        vector<int> numbers(n);
        set<int> differences; // 用來存放差值

        // 讀取數列
        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }

        // 計算相鄰差值並存入集合
        for (int i = 1; i < n; i++)
        {
            differences.insert(abs(numbers[i] - numbers[i - 1]));
        }

        // 檢查集合是否包含 1 到 n-1
        bool isJolly = (differences.size() == n - 1); // 必須有 n-1 個差值
        for (int i = 1; i <= n - 1 && isJolly; i++)
        {
            if (!differences.count(i))
            { // 如果缺少某個必要的差值
                isJolly = false;
            }
        }

        // 輸出結果
        cout << (isJolly ? "Jolly" : "Not jolly") << endl;
    }

    return 0;
}
