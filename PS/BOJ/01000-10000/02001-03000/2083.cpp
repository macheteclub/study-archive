#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int a, w;

    while (cin >> name >> a >> w) {
        if (name == "#") break;
        if (a > 17 || w >= 80) {
            cout << name << " Senior" << "\n";
        } else {
            cout << name << " Junior" << "\n";
        }
    }
}
    