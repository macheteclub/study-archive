#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int sum = 0;
    vector<int> v(5);

    for (int i = 0; i < 5; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
    }

    sort(v.begin(), v.end());

    cout << sum / 5 << "\n";
    cout << v[2];

}