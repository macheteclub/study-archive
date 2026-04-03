#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    set<string, greater<>> s;
    for (int i = 0; i < n; i++) {
        string name, status;
        cin >> name >> status;

        if(status != "leave") {
            s.insert(name);
        } else {
            s.erase(name);
        }
    }
    for (const string &x : s) {
        cout << x << "\n";
    }

}