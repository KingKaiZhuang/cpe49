#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    bool status = true;
    
    while(getline(cin,line)) {

        for(int i = 0;i < line.size();i++) {
            if(line[i] == '"') {
                if(status) {
                    cout << "``";
                    status = false;
                } else {
                    cout << "''";
                    status = true;
                }
            } else {
                cout << line[i];
            }
        }

        cout << endl;
    }

}