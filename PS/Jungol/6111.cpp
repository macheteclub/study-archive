#include <iostream>

using namespace std;

int main() {
    int board[51][51] = {};
    int n, m;
    cin >> n >> m;

    int x, y;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;

        for (int j = x; j < x + 3; j++) {
            for (int k = y; k < y + 3; k++) {
                board[j][k] = 1;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
}
