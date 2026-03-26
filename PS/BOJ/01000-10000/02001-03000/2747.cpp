#include <iostream>

using namespace std;

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }
    if (n == 1) {
        cout << 1;
        return 0;
    }

    int fn = 0, n1 = 0, n2 = 1;
    for (int i = 0; i <= n-2; i++) {
        fn = n1 + n2;
        n1 = n2;
        n2 = fn;
    }
    cout << fn;

}