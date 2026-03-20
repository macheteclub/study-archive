#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n; 

    if (n == 0) {
        cout << 1;
        return 0;
    }

    int p = 1;
    for (int i = 1; i <= n; i++) {
        p = p * i;
    }
    cout << p;

}