#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int best = 0;
    for (int i = 0; i < n; ++i) {
        int a, d, g;
        cin >> a >> d >> g;
        
        int score = a * (d + g);
        if (a == (d + g)) {
            score *= 2;
        }
        best = max(best, score);
    }
    cout << best;

}
