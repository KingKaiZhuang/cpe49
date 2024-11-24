#include <iostream>
using namespace std;

int main() {
    long long S, D;
    while(cin >> S >> D) {
        long long current_day = 0;
        long long group_size = S;

        while(current_day < D) {

            current_day += group_size;
            if(current_day >= D) {
                break;
            }
            group_size++;
            
        }
        cout << group_size << endl;
    }
    return 0;
}