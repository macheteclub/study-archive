#include <iostream>

using namespace std;

long long gcd(long long x, long long y) {
    while (y != 0) {
        long long r = x % y;
        x = y;
        y = r;
    }

    return x;
}

int main() {
    long long p, v, k;
    cin >> p >> v >> k;

    long long p1 = p + 1;
    long long v1 = v + 1;

    long long g = gcd(p1, v1);
    long long lcm = p1 / g * v1;

    long long b = k / lcm;
    long long c = k / v1 - b;
    long long d = k / p1 - b;
    long long a = k - b - c - d;

    cout << a << " " << b << " " << c << " " << d;
}
