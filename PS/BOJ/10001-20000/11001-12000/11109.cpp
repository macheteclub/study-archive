#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    long long d, n; // 병렬 개발시간, 실행횟수
    long long s, p; // 직렬, 병렬
    // 5 * 8 : 20 + 5 * 2 // 40 < 30
    // 2 * 3 : 10 + 2 * 2 // 6 < 14

    for (int i = 0; i < t; i++) {
        cin >> d >> n >> s >> p;

        if (n*s > d+n*p) {
            cout << "parallelize" << "\n";
        } else if (n*s == d+n*p) {
            cout << "does not matter" << "\n";
        } else {
            cout << "do not parallelize" << "\n";
        }
    }

}