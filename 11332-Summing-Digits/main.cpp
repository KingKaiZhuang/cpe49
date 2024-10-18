#include <iostream>

using namespace std;

int result(int n) {
    while(n >= 10) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n = n / 10;
        }
        n = sum;
    }
    return n;
}

int main() {
    int n;
    while(cin >> n && n != 0) {
        cout << result(n) << endl;
    }
    return 0;
}