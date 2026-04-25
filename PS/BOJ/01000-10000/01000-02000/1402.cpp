// #include <iostream>
// #include <vector>

// using namespace std;

// vector<long long> pf(long long n) {
//     vector<long long> v;
//     if (n < 0) n = -n; // 음수 처리
//     for (long long p = 2; p*p <= n; p++) {
//         while (n % p == 0) {
//             v.push_back(p);
//             n /= p;
//         }
//     }
//     if (n > 1) v.push_back(n);
//     return v;
// }

// int main() {
//     int t;
//     cin >> t;

//     for (int i = 0; i < t; i++) {
//         long long a, b;
//         cin >> a >> b;

//         if (a == 0) { // A가 0일 때
//             cout << "no" << "\n";
//             continue;
//         }

//         vector<long long> v = pf(a); // 2, 3
//         long long f = 0;
//         for (int j = 0; j < (int)v.size(); j++) {
//             f += v[j];
//         }
//         if (f == b) cout << "yes" << "\n";
//         else cout << "no" << "\n";

//     }

// }

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;
        cout << "yes" << "\n";
    }
}