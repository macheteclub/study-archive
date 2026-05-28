#include <iostream>

using namespace std;

long long dp[41];

int main() {
    int n, m;
    cin >> n >> m;

    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= 40; ++i) {
        dp[i] = dp[i-1] + dp[i-2];
    }

    // 1 2 3 4* 5 6 7* 8 9 = 3 * 2 * 2

    int a = 0, b = 0;
    int mul = 1;
    for (int i = 0; i < m; i++) {
        int num; // 4, 7 ...
        cin >> num;

        a = num;
        if (a - b < 1) {
            continue;
        } else {
            int p = a - b;
            mul *= dp[p-1];
            //cout << dp[p-1] << " ";
        }
        b = a;
    }
    mul *= dp[n-b];

    cout << mul;
}
