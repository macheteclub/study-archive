#include <iostream>

using namespace std;

int main() {
    int d;
    cin >> d;

    int n, cnt = 0;
    for (int i = 0; i < 5; i++) {
        cin >> n;
        if (n == d) {
            cnt++;
        }
    }
    cout << cnt;
    
}