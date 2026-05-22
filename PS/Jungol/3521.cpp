#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, cnt = 0;
    vector<int> v(5);
    vector<int> w = {1, 2, 4, 8, 16};
    // 10 10 10 0 10 ... 89
    cin >> v[0] >> v[1] >> v[2] >> v[3] >> v[4] >> n;

    for (int i = 4; i >= 0; i--) {
        while (n >= w[i] && v[i] > 0 ) {
            n -= w[i];
            v[i]--;
            cnt++;
        }
    }

    if (n == 0) {
        cout << cnt << '\n';
    } else {
        cout << "impossible" << "\n";
    }

}
