#include <iostream>

using namespace std;

int main() {
    int n, tt, bb;
    cin >> n >> tt >> bb;

    for (int i = 1; i < n; i++) {
        int t, b;
        cin >> t >> b;
        
        if (t > tt) tt = t;
        if (b < bb) bb = b;
    }

    long long m = 1LL * tt * bb;
    cout << (m % 7) + 1;
}

