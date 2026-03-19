#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int v, e, m = 0;
        cin >> v >> e;

        //(꼭짓점의 수) - (모서리의 수) + (면의 수) = 2
        // 면의 수 = 2 - (꼭수 - 모수)
        m = 2 - (v - e);
        cout << m << "\n";
    }
}