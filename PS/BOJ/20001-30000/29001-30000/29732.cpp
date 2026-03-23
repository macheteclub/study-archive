#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    string s;
    cin >> s;

    int cntR = 0;
    vector<bool> virus(n, false);

    for (int i = 0; i < n; i++) {
        if (s[i] == 'R') {
            int left = i - k;
            int right = i + k;

            if (left < 0) {
                left = 0;
            }
            if (right >= n) {
                right = n - 1;
            }

            for (int j = left; j <= right; j++) {
                virus[j] = true;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (virus[i]) cntR++;
    }

    if (cntR <= m) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}