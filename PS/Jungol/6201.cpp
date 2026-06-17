#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long x = 1;
    int ans = 0;
    while (x < n) {
        x *= 2;
        ans++;
    }

    cout << ans;



}
