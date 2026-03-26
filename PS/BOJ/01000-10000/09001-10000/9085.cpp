#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    int n;
    for (int i = 0; i < t; i++) {
        int sum = 0;
        cin >> n;
        for (int j = 0; j < n; j++) {
            int num;
            cin >> num;
            sum += num;
        }
        cout << sum << "\n";
    }

}