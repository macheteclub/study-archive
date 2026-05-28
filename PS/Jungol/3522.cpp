#include <iostream>

using namespace std;

long long dp[100001];
// 배열을 main 안에서 생성하면 따로 초기화가 안되고 쓰레기값이 들어감 ...
// dp의 경우, 배열은 보통 전역으로 선언

int main() {
    int n;
    cin >> n;

    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = (dp[i-1] % 1000000007 + dp[i-2] % 1000000007);
    } // 안에 따로따로 나눠줘야함

    // for (int i = 2; i < 100007; ++i) {
    //     dp[i] = (dp[i-1] % 1000000007 + dp[i-2] % 1000000007);
    // }

    cout << dp[n] % 1000000007;
    return 0;
}
