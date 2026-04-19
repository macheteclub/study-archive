#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        vector<int> v;

        for (int i = 0; i < 7; i++) {
            int n;
            cin >> n;

            if (n % 2 == 0) {
                v.push_back(n);
            }
        }

        sort(v.begin(), v.end());

        int sum = 0;
        for (int i = 0; i < v.size(); i++) {
            sum += v[i];
        }
        cout << sum << " " << v[0] << "\n";
    }

}