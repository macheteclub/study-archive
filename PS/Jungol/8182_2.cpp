#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long a[100000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool win = false;
    for (int i = n - 1; i >= 0; i--) {
        if (win == false) {
            win = true;
        } else {
            if (a[i] == 1) {
                win = false;
            } else {
                win = true;
            }
        }
    }
    if (win) {
        cout << "J";
    } else {
        cout << "H";
    }
}
