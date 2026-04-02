#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    
    map<string, string> mp;
    for (int i = 0; i < n; i++) {
        string k, v;
        cin >> k >> v;
        mp.insert({k, v});
    }

    for (int i = 0; i < m; i++) {
        string site;
        cin >> site;
        cout << mp[site] << "\n";
    }
}