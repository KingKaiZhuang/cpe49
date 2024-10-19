#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string sentence;
    int max_length = 0;
    vector<string> sentences;

    while(getline(cin,sentence)) {
        sentences.push_back(sentence);
        if(sentence.size() > max_length) {
            max_length = sentence.size();
        }
    }

    // cout << sentences.size();
    for(int col = 0;col < max_length;col++) {
        for(int row = sentences.size() - 1;row >= 0;row--) {
            if(col < sentences[row].size()) {
                cout << sentences[row][col];
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}