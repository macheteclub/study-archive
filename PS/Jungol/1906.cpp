#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a, b;
    cin >> a >> b;

    int m;
    cin >> m;

    vector<int> v[101];
    int arr[101];

    for (int i = 0; i <= n; i++) {
        arr[i] = -1;
    }

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;

        v[x].push_back(y);
        v[y].push_back(x);
    }

    queue<int> q;

    q.push(a);
    arr[a] = 0;

    while (!q.empty()) { // 큐가 빌 때까지...
        int cur = q.front();
        q.pop();

        for (int i = 0; i < v[cur].size(); i++) {
            int j = v[cur][i];

            if (arr[j] == -1) {
                arr[j] = arr[cur] + 1;
                q.push(j);
            }
        }
    }
    cout << arr[b] << "\n";

}
