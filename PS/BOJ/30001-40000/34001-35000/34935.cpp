#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    long long f;
    cin >> f;

    for (int i = 1; i < n; i++) {
    long long m;
        cin >> m;

    if (m <= f) {
            cout << 0;
            return 0;
        }
        f = m;
    }
    cout << 1;
}