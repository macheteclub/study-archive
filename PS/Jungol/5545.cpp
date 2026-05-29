#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long p, v, k;
    cin >> p >> v >> k;
    long long p1 = p+1;
    long long v1 = v+1;

    vector<long long> pv;
    vector<long long> vv;

    for (long long i = 1; i <= k; i++) {
        if (i % p1 == 0) pv.push_back(1);
        else pv.push_back(0);
    }

    for (long long i = 1; i <= k; i++) {
        if (i % v1 == 0) vv.push_back(1);
        else vv.push_back(0);
    }
    // cout << "\n";

    // for (long long i = 1; i <= k; i++) {
    //     cout << vv[i] << " ";
    // }

    long long a = 0, b = 0, c = 0, d = 0;
    for (long long i = 1; i <= k; i++) {
        if (pv[i] == 0 && vv[i] == 0) a++;
        else if (pv[i] == 1 && vv[i] == 1) b++;
        else if (pv[i] == 0 && vv[i] == 1) c++;
        else d++;
    }

    cout << a << " " << b << " " << c << " " << d;

}
