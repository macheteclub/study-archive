#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> mp;
    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;

        size_t pos = str.rfind("Cheese");
        if (pos == string::npos) continue;
        if (pos+6 != str.size()) continue;

        mp.insert({str, 1});
    }
    if (mp.size() >= 4) {
        cout << "yummy";
    } else {
        cout << "sad";
    }


}