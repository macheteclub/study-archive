#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> w(10);
    vector<int> k(10);

    for (int i = 0; i < 20; i++) {
        int n;
        cin >> n;

        if (i < 10) {
            w.push_back(n);
        } else {
            k.push_back(n);
        }
    }
    sort(w.begin(), w.end(), greater<>());
    sort(k.begin(), k.end(), greater<>());

    int sum1 = w[0] + w[1] + w[2];
    int sum2 = k[0] + k[1] + k[2];
    cout << sum1 << " " << sum2;
}