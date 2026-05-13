#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, k; // 10, 7, 5
    cin >> n >> m >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        v[i] = i+1;
    }

    int index = 0;
    int answer = 0;
    for (int i = 0; i < k; i++) {
        index = (index + m - 1) % v.size(); // 6 % 10 -> 6
        answer = v[index];
        v.erase(v.begin() + index);
        // i = 1에서(2번째): 6 + 6 = 12, 12 % 9 -> 3
        // 값: 1, 2, 3, 4, 5, 6, 8, 9, 10
        // 인덱스: 0, 1, 2, 3, 4, 5, 6, 7, 8
    }
    cout << answer;

}
