#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int p, pname;
        cin >> p >> pname;
        mp.insert({p, pname}); // 3 1, 2 4, 1 99
    }

    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;

        vector<int> v;
        bool died = false;
        for (int j = 0; j < t; j++) {
            int r; int cnt = 0;
            cin >> r;

            if (mp.find(r) == mp.end()) {
                died = true;
            } else if (!died) {
                v.push_back(mp[r]);
            }
        }
        if (died) { 
            cout << "YOU DIED\n";
        } else {
            for (int j = 0; j < v.size(); j++) cout << v[j] << " ";
            //cout << "\n";
        }

    }

}