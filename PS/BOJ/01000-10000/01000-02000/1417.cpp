#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, num1;
    cin >> n >> num1;

    vector<int> v;
    for (int i = 1; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    } 

    int result = 0;
    if (n == 1) {
        cout << 0;
        return 0;
    }

    while (true) {
        int best = 0;
        // if (v[best] < num1) break;
        for (int i = 1; i < v.size(); i++) {
            if (v[i] > v[best]) {
                best = i;
            }
        }
        if (v[best] < num1) break;

        v[best]--;
        num1++;
        result++;
    }
    cout << result;
}