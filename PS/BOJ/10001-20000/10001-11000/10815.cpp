#include <iostream>
#include <set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m;
    cin >> n;

    set<int> s;
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;

        s.insert(c);
    }
    
    cin >> m;

    for (int i = 0; i < m; i++) {
        int c;
        cin >> c;

        cout << s.count(c) << " ";
    }

}