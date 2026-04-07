#include <iostream>
#include <string>
//#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;

        cout << str[0] << str.back() << "\n";
    }
}