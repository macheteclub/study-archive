#include <iostream>
#include <string>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;

    int g = gcd(a, b);
    int l = (a / g) * b; // gcd(24, 30), 4 * 30 = 120

    cout << g << "\n" << l;
}
