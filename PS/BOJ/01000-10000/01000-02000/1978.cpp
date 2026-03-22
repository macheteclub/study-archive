#include <iostream>

#include <cmath>

using namespace std;

bool prime(int x) {
    if (x < 2) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;
    for (int d = 3; d * d <= x; d += 2) {
        if (x % d == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;

        if (prime(m)) {
            cnt++;
        }
    }
    cout << cnt;

}