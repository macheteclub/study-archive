#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int bestPrice = -1;
        string bestName;

        for (int i = 0; i < n; i++) {
            int price;
            string name;
            cin >> price >> name;

            if (price > bestPrice) {
                bestPrice = price;
                bestName = name;
            }
        }
        cout << bestName << "\n";
    }

}