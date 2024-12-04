#include <iostream>

using namespace std;

int main()
{
    int start_num,end_num;

    while(cin >> start_num >> end_num && (start_num > 0 && end_num > 0)) {
        int total = 0;
        if(start_num > end_num) {
            int flag = end_num;
            end_num = start_num;
            start_num = flag;
        }

        for(int i = 1;i * i <= end_num;i++) {
            if(i * i >= start_num) {
                total++;
            }
        }

        cout << total << endl;
    }
    return 0;
}
