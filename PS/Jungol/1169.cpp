#include <iostream>

using namespace std;

int n, t;
int arr[10];
bool visited[6];

void rollDice(int index) {
    if(index == n) {
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = 1; i <= 6; i++) {
        // type 2
        if (t == 2 && index > 0 && arr[index - 1] > i) {
            continue;
        }
        // type 3
        if (t == 3 && visited[i]) {
            continue;
        }

        arr[index] = i;

        if (t == 3) visited[i] = true;
        rollDice(index + 1);
        if (t == 3) visited[i] = false;
    }

}
int main() {
    cin >> n >> t;
    rollDice(0);
}