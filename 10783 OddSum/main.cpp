#include <iostream>

using namespace std;

int main()
{
    int start_number,end_number;

    int times,result;
    int c = 1;
    cin >> times;

    while(times--) {
        cin >> start_number >> end_number;
        for(int i = start_number;i <= end_number;i++) {
            if(i % 2 == 1) {
                result += i;
            }
        }
        cout << "Case " << c << ": " << result << endl;
        c++;
        result = 0;
    }

    return 0;
}
