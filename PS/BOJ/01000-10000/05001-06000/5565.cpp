#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    int sum = 0;
    for (int i = 0; i < 9; i++) {
        int n1;
        cin >> n1;
        sum += n1;
    }
    cout << t - sum;
}