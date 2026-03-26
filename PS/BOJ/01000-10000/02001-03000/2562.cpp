#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v(9); 
    for (int i = 0; i < 9; i++) {
        cin >> v[i];
    }
    vector<int> v2 = v;
    
    sort(v2.begin(), v2.end());

    cout << v2[8] << "\n";

    int cnt = 1;
    for (int i = 0; i < 9; i++) {
        if (v2[8] == v[i]) {
            cout << cnt; 
            return 0;
        }
        cnt++;
    }
}