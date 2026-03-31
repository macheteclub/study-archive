#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    vector<int> v;
    for (int i = 1; v.size() < b; i++) {
        for (int j = 0; j < i && v.size() < b; j++) {
            v.push_back(i); // i
        }
    }

    int sum = 0;
    for (int i = a-1; i <= b-1; i++) { // 2 6
        sum += v[i];
    }
    cout << sum;
}