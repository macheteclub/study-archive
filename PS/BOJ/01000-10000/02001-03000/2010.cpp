#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int m, sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> m;
        sum += m;

        if (m == 1 && sum <= 2) {
            cout << sum;
            return 0;
        }
    }
    cout << sum - (n - 1);
    // 0 0 - / 0 - / 0
    // 0 0 0 0 - / 0 
    // 0 0 - / - / 0 - / 0 0
}