#include <iostream>

using namespace std;

int dp[301];
int score[10001];

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> score[i];
    }

    // dp = 그 계단까지의 점수?
    dp[1] = score[1];
    dp[2] = score[1] + score[2];
    for (int i = 3; i <= 301; ++i) {
        // 1. dp[i-2] + score[i]
        // 2. dp[i-3] + score[i-1] + score[i]
        dp[i] = max(dp[i-2] + score[i], dp[i-3] + score[i-1] + score[i]);
    }

    cout << dp[n];
}
