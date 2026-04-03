#include <iostream>
#include <string>

using namespace std;

int main() {
    string str; 
    cin >> str;

    int f = 0;
    int l = str.size() - 1;

    for (int i = 0; i < str.size(); i++) {
        if (str[f] == str[l]) {
            f++;
            l--;
        } else {
            cout << 0;
            return 0;
        }
    }
    cout << 1;
}