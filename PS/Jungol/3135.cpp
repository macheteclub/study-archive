#include <iostream>
#include <vector>

using namespace std;

// s[R]– s[L–1]
// s[4]– s[1] = 5 + 3 – 7 + 2 – 5 = -2
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;
    vector<long long> v(n+1);
    vector<long long> s(n+1);

    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
        s[i] = v[i] + s[i-1];
    }

    long long m;
    cin >> m;
    for (int i = 1; i <= m; ++i) {
        long long a, b;
        cin >> a >> b;
        cout << s[b] - s[a - 1] << "\n";
    }
}
