#include <iostream>
#include <vector>
#include <cmath> 

using namespace std;

int main() {
    int m, n;
    vector<int> v;

    cin >> m >> n;

    for(int i = m; i <= n; i++) {
        int r = sqrt(i);
        if (r*r == i) {
            v.push_back(i);
        } 
    }

    if (v.empty()) {
        cout << -1;
    } else {
        int sum = 0;
        for (int a : v) sum += a;
        cout << sum << "\n";
        cout << v[0];
    }
}
