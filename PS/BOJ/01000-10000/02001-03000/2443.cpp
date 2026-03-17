// 첫째 줄에는 별 2×N-1개, 둘째 줄에는 별 2×N-3개,
// N번째 줄에는 별 1개를 찍는 문제
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i - 1); j++) {
            cout << "*";
        }
        cout << "\n";
    }
}