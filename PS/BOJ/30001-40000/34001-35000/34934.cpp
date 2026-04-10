#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string str; int y;
        cin >> str >> y;

        if (y == 2026) {
            cout << str;
        }
    }
}