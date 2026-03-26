#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, sum = 0;
    vector<int> v;
    for (int i = 0; i < 7; i++) {
        cin >> n;
        if (n % 2 == 1) {
            sum += n;
            v.push_back(n);
        }
    }
    sort(v.begin(), v.end());

    if (sum == 0) {
        cout << -1;
        return 0;
    } else {
        cout << sum << "\n";
        cout << v[0];
    }
}