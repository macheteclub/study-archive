#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    string s = to_string(n);
    string str = "";

    for (int i = 0; i < n; i++) {
        str += s;
        //cout << str << "\n";
    }

    if (n >= m) {
        for (int i = 0; i < m; i++) {
            cout << str[i];
        }
    } else {
        cout << str;
    }
}
