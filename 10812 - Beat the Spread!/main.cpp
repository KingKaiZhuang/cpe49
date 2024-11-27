#include <iostream>

using namespace std;

int main()
{
    int n;
    int s,d;
    cin >> n;

    while(n--) {
        cin >> s >> d;
        // a + b = d
        // a - b = s
        // 2a = d + s, a = (d+s) / 2
        // 2b = d - s, b = (d-s) / 2

        int first_condition = (d+s) % 2;
        int second_condition = (d-s) % 2;

        if(s < d || first_condition || second_condition) {
            cout << "impossible" << endl;
            continue;
        }

        int a = (d+s) / 2;
        int b = abs((d-s) / 2);

        if(a < b) {
            int flag = b;
            b = a;
            a = flag;
        }

        cout << a << " " << b << endl;

    }
    return 0;
}
