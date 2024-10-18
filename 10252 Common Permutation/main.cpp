#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    string a, b;
    string result;
    while(getline(cin, a) && getline(cin, b)) {
        map<char, int> m1,m2;

        for(char c : a) {
            m1[c]++;
        }

        for(char c : b) {
            m2[c]++;
        }

        // for(auto it = m1.begin();it != m1.end();it++) {
        //     cout << it->first << " " << it->second << endl;
        // }

        for(char c = 'a';c <= 'z'; c++) {
            if(m1[c] > 0 && m2[c] > 0) {
                int count = min(m1[c],m2[c]);
                result.append(count, c);
            }
        }

        cout << result << "\n\n";

        result.clear();

    }
}