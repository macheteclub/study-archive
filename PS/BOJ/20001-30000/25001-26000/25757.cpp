#include <iostream>
#include <map>

using namespace std;

// Y, F, O : 2, 3, 4
// Y, F, O : 1, 2, 3 // 임스 포함이므로 ... 
int main() {
    int n; char m;
    cin >> n >> m;

    map<string, int> mp;
    for (int i = 0; i < n; i++) {
        string p;
        cin >> p;

        mp.insert({p, 1});
    }

    if (m == 'Y') cout << mp.size();
    else if (m == 'F') cout << mp.size() / 2;
    else if (m == 'O') cout << mp.size() / 3;
}