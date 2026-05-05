#include <iostream>
#include <deque>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    deque<int> d;
    for (int i = 1; i <= n; i++) {
        d.push_back(i);
    }

    while (d.size() >= k) {
        int f = d.front();
        d.pop_front();

        for (int i = 0; i < k - 1; i++) {
            d.pop_front();
        }

        d.push_back(f);
    }

    cout << d.front();
}