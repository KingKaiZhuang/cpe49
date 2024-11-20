#include <iostream>
#include <vector>
#include <set>
#include <cmath>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        vector<int> numbers(n);
        set<int> diff;

        // 讀取數列
        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }

        // 單一元素數列直接判斷為 Jolly
        if (n == 1)
        {
            cout << "Jolly" << endl;
            continue;
        }

        // 計算相鄰差值
        for (int i = 1; i < numbers.size(); i++)
        {
            diff.insert(abs(numbers[i] - numbers[i - 1]));
        }

        // 判斷是否為 Jolly
        bool isJolly = true;
        for (int j = 1; j <= n - 1; j++)
        {
            if (!diff.count(j))
            {
                isJolly = false;
                break;
            }
        }

        // 輸出結果
        cout << (isJolly ? "Jolly" : "Not jolly") << endl;
    }

    return 0;
}
