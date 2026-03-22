#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string n;
    cin >> n;

    vector<int> v(n.size());

    for (int i = 0; i < n.size(); i++) {
        v[i] = stoi(n.substr(i, 1));
    }

    sort(v.begin(), v.end(), greater<>());

    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
    }

}