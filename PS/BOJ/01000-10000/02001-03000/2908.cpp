#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int a2 = stoi(a);
    int b2 = stoi(b);

    if (a2 > b2) {
        cout << a2;
    } else {
        cout << b2;
    }

}