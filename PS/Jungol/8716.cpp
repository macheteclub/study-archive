#include <iostream>

using namespace std;

long long power(long long a, long long b, long long mod) {
    if (mod == 0) {
        return 0;
    }

    long long r = 1;

    a %= mod;

    while (b > 0) {
        if (b % 2 == 1) {
            r = r * a % mod;
        }

        a = a * a % mod;
        b /= 2;
    }
    return r;
}

int main() {
    long long x, y, n;
    long long a, b, m;

    cin >> x >> y >> n;
    cin >> a >> b >> m;

    cout << power(x, y, n) << "\n";
    cout << power(a, b, m);
}
