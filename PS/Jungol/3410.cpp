#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int avg[100];
    int mx[100];

    for (int i = 0; i < n; i++) {
        cin >> avg[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> mx[i];
    }

    int easy = 0;
    int hard = 0;

    for (int i = 0; i < n; i++) {
        if (avg[i] == 100) {
            easy++;
        }

        if (mx[i] < 100) {
            hard++;
        }
    }

    cout << easy << '\n';
    cout << hard;
}
