#include <iostream>
using namespace std;

int main() {
    int x, n;
    cin >> x >> n;

    if (n == 1) {
        if (x < 0) cout << "INFINITE";
        else cout << 0;
    }
    else if (n % 2 == 1) {
        cout << "ERROR";
    }
    else if (n == 0) {
        if (x > 0) cout << "INFINITE";
        else cout << 0;
    }
    else {
        int k = n / 2;

        if (x <= 0) cout << 0;
        else cout << (x - 1) / k;
    }
}