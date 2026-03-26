// 도(0 1 1 1), 개(0 0 1 1), 걸(0 0 0 1), 윷(0 0 0 0), 모(1 1 1 1)
// A, B, C, D, E
#include <iostream>

using namespace std;

int main() {
    int n, cnt = 0;
    for (int i = 0; i < 3; i++) {
        cnt = 0;
        for (int j = 0; j < 4; j++) {
            cin >> n;
            if (n == 0) {
                cnt++;
            }
        }
        if (cnt == 0) cout << "E" << "\n";
        if (cnt == 1) cout << "A" << "\n";
        if (cnt == 2) cout << "B" << "\n";
        if (cnt == 3) cout << "C" << "\n";
        if (cnt == 4) cout << "D" << "\n";
    }

}