#include <iostream>
#include <map>

// a, b, a, b, c, ab, ba, ab, bc, aba, bab
// abc, abab, babc, ababc
using namespace std;

int main() {
    string str;
    cin >> str;

    map<string, int> mp;
    for (int i = 0; i < str.size(); i++) {
        for (int j = 0; j < str.size(); j++) {
            string s = str.substr(i,j);
            mp.insert({s,1});
        }
    }
    cout << mp.size();
}