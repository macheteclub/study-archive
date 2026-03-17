// 이를 식으로 써보면 Fn = Fn-1 + Fn-2 (n ≥ 2)가 된다.
// 0, 1, // 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597

#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long fn = 0;
    long long n1 = 0;
    long long n2 = 1;

    if (n == 0) {
        cout << 0;
        return 0;
    }
    if (n == 1) {
        cout << 1;
        return 0;
    }
    for (int i = 0; i <= n-2; i++) {
        fn = n1 + n2;
        n1 = n2;
        n2 = fn;
        //cout << fn;
    }
    cout << fn;
}