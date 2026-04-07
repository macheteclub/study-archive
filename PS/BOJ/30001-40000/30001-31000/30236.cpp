#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;

        vector<int> a;
        vector<int> b; 
 
        for (int j = 1; j <= m; j++) {
            int d;
            cin >> d;
            a.push_back(d); // 1 3 2 6 7
            b.push_back(j);

            if (a[0] == b[0]) b[0]++;
            for (int k = 1; k < j; k++) {
                b[k] = b[k-1] + 1;
                if (a[k] == b[k]) b[k]++;
            }
        }
        cout << b.back() << "\n";

    }

}