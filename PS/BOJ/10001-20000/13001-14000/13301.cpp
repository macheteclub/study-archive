#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v = {1, 1}; // 1, 1, 2, 3, 5 .. 
    for (int i = 0; i < n-2; i++) {
        v.push_back(v[i] + v[i+1]);
    }
    int ans = (v[n-1] + (v[n-1]+v[n-2]))*2;
    cout << ans;

}