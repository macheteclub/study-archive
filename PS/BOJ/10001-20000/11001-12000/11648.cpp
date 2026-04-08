#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string str;
    cin >> str;

    // vector<int> v;
    // for (int i = 0; i < str.size(); i++) {
    //     v.push_back(stoi(str.substr(i,1)));
    //     //cout << v[i] << " ";
    // }
    
    int cnt = 0;
    while (str.size() > 1) {
        int tmp = 1;
        for (int i = 0; i < str.size(); i++) {
            tmp *= (str[i] - '0');
        }
        str = to_string(tmp);
        cnt++;
    }
    cout << cnt;
}