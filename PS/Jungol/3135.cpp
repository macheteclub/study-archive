#include <iostream>
#include <vector>

using namespace std;

// s[3][3] = v[3][3] + s[2][3] + s[3][2]– s[2][2]
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, q;
    cin >> n;
    vector<vector<long long>> v(n+1, vector<long long>(n+1));
    vector<vector<long long>> s(n+1, vector<long long>(n+1));

    for (long long i = 1; i <= n; ++i) {
        for (long long j = 1; j <= n; ++j) {
            cin >> v[i][j];
            s[i][j] = v[i][j] + s[i-1][j] + s[i][j-1] - s[i-1][j-1];
        }
    }

    long long q;
    long long sr, sc, er, ec;
    cin << q;
    for (long long i = 1; i <= q; ++i) {
        cin >> sr >> sc >> er >> ec;
        cout << s[er][ec] - s[sr-1][ec] + s[er][sc-1] + s[sr-1][sc-1] << "\n";
    }
}
