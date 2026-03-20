#include <iostream>

using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;

    for (int i = 0; i <= n; i++) {
        // 0 + 0 
        // 0 + 1 / 1 + 1 
        // 0 + 2 / 1 + 2 / 2 + 2
        // 0 + 3 / 1 + 3 / 2 + 3 / 3 + 3
        for (int j = 0; j <= i; j++) {
            sum += i+j;
        }
    }
    cout << sum;

}