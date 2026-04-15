#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, t = 666;
    cin >> n;

    int cnt = 0;
    while (true) {
        string str = to_string(t);

        if (str.find("666") != -1) {
            cnt++;
            if (cnt == n) {
                cout << t;
                break;
            }
        }
        t++;
    }

}