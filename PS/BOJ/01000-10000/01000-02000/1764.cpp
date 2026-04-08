#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    map<string, int> mp;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        mp.insert({str, 1});
    }

    int cnt = 0;
    vector<string> v;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        
        if (mp.find(str) != mp.end()) {
            cnt++;
            v.push_back(str);
        }
    }

    sort(v.begin(), v.end());
    
    cout << cnt << "\n";
    for (int i = 0; i < cnt; i++) {
        cout << v[i] << "\n";
    }
}