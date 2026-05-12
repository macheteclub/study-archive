#include <iostream>
#include <vector>

using namespace std;

int k;
vector<int> arr;
vector<int> lotto;

void dfs(int start, int depth) {
    if (depth == 6) {
        for (int i = 0; i < 6; i++) {
            cout << lotto[i] << " ";
        }
        cout << "\n";
    }

    for (int i = start; i < k; i++) {
        lotto.push_back(arr[i]);
        dfs(i+1, depth+1);
        lotto.pop_back();
    }
}

int main() {
    cin >> k;
    arr.resize(k);

    for (int i = 0; i < k; i++) {
        cin >> arr[i];
    }

    dfs(0, 0);
}
