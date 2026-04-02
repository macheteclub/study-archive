#include <iostream>
#include <map>
#include <string>
// #include <sstream>
// #include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> mp;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;

        size_t pos = str.find('.');

        string name = str.substr(0, pos);
        string type = str.substr(pos+1);

        mp.insert({type, mp[type]++});

    }

    for (const auto &p : mp) {
        cout << p.first << " " << p.second << "\n";
    }
    

}