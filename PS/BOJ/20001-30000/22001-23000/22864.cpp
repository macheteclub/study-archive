#include <iostream>
// #include <>
// A B C M 

using namespace std;

int main() {
    int a, b, c, m;
    cin >> a >> b >> c >> m;
    if (a > m) {
        cout << 0;
        return 0;
    }
    
    int sum = 0, task = 0;
    for (int i = 0; i < 24; i++) {
        if (sum + a <= m) {
            sum += a;
            task += b;
        } else {
            sum -= c;
            if (sum < 0) sum = 0;
        }
        //cout << task << " ";
    }
    cout << task;
}