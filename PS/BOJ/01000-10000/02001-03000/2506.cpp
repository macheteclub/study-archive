#include <iostream>

using namespace std;

int main() {
    int t, n;
    cin >> t;

    int score = 0, cnt = 1;
    for (int i = 0; i < t; i++) {
        cin >> n;
        if (n == 1) {
            score += n * cnt;
            cnt++;
        } else if (n == 0) {
            cnt = 1;
        }
    }
    cout << score;
}