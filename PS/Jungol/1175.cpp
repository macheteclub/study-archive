#include <iostream>

using namespace std;

int n, m;
int arr[10];

void rollDice(int index, int sum) {
    if (index == n) {
        if (sum == m) {
            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
        return;
    }

    for (int i = 1; i <= 6; i++) {
        arr[index] = i;
        rollDice(index + 1, sum + i);
    }
}

int main() {
    cin >> n >> m;
    rollDice(0, 0);

    return 0;
}
