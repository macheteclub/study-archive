#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> v;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            v.push_back(i);
        } 
    }    
    
    sort(v.begin(), v.end());

    if (v.size() < m) {
        cout << 0;
        return 0;
    } else {
        cout << v[m-1];
    }
}