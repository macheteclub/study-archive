#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> v;

    for (int i = 0; i < n; i++) {
        int cnt;
        cin >> cnt;

        long long sum = 0;

        for (int j = 0; j < cnt; j++) {
            int t;
            cin >> t;

            sum += t;
        }

        v.push_back(sum);
    }

    sort(v.begin(), v.end());

    long long now = 0;
    long long ans = 0;

    for (int i = 0; i < n; i++) {
        now += v[i];
        ans += now;
    }

    cout << ans;
}
