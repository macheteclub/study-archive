#include <iostream>

using namespace std;

int n;

void hanoi(int n, int from, int mid, int to) {
    if (n == 0) return;

    hanoi(n-1, from, to, mid);
    cout << n << " : " << from << " -> " << to << "\n";
    hanoi(n-1, mid, from, to);
}

int main() {
    cin >> n;
    hanoi(n, 1, 2, 3);

}
