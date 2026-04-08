#include <iostream>
#include <vector>

using namespace std;

// 32점 ... 
int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        v.push_back({a,b});
    }

    int useful = 0;
    for (int i = 0; i < n; i++) {
        bool useless = false;

        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (v[i].first <= v[j].first && v[i].second <= v[j].second) {
                useless = true;
                break;
            }
        }
        if (!useless) useful++;
    }
    cout << useful;
}