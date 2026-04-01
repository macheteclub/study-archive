#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;

    vector<int> v(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int q;
        cin >> q;
        sum += q;
        v[i] = sum;
    }

    int r = sum * 2;
    int j = r - k;
    //cout << j;
    int t;
    if (k <= sum) t = k; else t = j;
    for (int i = 0; i < n; i++) {
        if (t < v[i]) {
            cout << i + 1;
            return 0;
        }
    }
    

}