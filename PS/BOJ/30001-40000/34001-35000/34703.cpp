#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(5);
    vector<int> day = {1,2,3,4,5};
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;

        v[m-1] = m;
    }

    if (v == day) cout << "NO";
    else cout << "YES";

}