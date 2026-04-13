#include <iostream>

using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;

    int best = abs(a-b);
    for (int i = 0, j; i < n; i++) {
        cin >> j;
        best = min(best, abs(j-b)+1);
    }
    cout << best;
}