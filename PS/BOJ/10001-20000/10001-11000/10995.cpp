#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            for (int j = n; j > 0; j--) {
                cout << " *";
            }
        } else {
            for (int j = n; j > 0; j--) {
                cout << "* ";
            }
        }
        cout << "\n";
    }
}