#include <iostream>

using namespace std;

int main() {
    int x;
    cin >> x;
    // 64 32 16 8 4 2 1

    int cnt = 0;
    while (x > 0) {
        if (x % 2 == 1) {
            cnt++; // 23 % 2 == 1
        }
        x /= 2;
    }
    cout << cnt;

}