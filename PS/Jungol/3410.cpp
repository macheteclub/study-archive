#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int avg[101];
    int high[101];
    for (int i = 0; i < n; i++) {
        cin >> avg[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> high[i];
    }

    int easy = 0;
    int hard = 0;
    for (int i = 0; i < n; i++) {
        if (avg[i] == 100) {
            easy++;
        }

        if (high[i] < 100) {
            hard++;
        }
    }

    cout << easy << "\n";
    cout << hard;
}
