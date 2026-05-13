#include <iostream>
#include <queue>

using namespace std;

int main() {
    int p, n;
    cin >> p >> n; // 3, 9

    // int pizza[51];
    queue<int> pizza[51];
    int price = 0;
    for (int i = 0; i < n; i++) {
        int cmd, pi, mi;
        cin >> cmd >> pi;

        if (cmd == 0) {
            cin >> mi;
            pizza[pi].push(mi);
        } else if (!pizza[pi].empty()) {
            price += pizza[pi].front();
            pizza[pi].pop();
        }
    }
    cout << price;

}
