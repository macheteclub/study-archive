#include <iostream>

using namespace std;

// 1. 상태 정의
int board[501][501]; // 0, 1, 2 입력에 대한 처리
int dp[501][501]; // 황금의 수

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> board[i][j];
        }
    }

    // 2. 초기값이 없나? 싶음
    // 3. 점화식 세우기 ...
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (board[i][j] == 0) {
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            } else if (board[i][j] == 2) {
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]) + 1;
            } else { // xx
                dp[i][j] = 0;
            }
        }
    }

    // cout << "\n";
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= m; j++) {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    cout << dp[n][m];
}
