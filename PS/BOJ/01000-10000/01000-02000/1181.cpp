#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const string& a, const string& b) {
    if (a.size() != b.size()) {
        return a.size() < b.size();
    } 
    return a < b;
}

int main() {
    int n;
    cin >> n;

    vector<string> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), compare);
    
    for (int i = 0; i < (int)v.size(); i++) {
        if (i == 0) {
            cout << v[i] << "\n";
        } else {
            if (v[i] != v[i - 1]) {
                cout << v[i] << "\n";
            }
        }
    }
}