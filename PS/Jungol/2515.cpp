#include <iostream>
#include <string>
#include <set>

using namespace std;

int n, k;
string card[10];
bool used[10];
set<string> s;

void choose(int cnt, string now) {
    if (cnt == k) {
        s.insert(now);
        return;
    }

    for (int i = 0; i < n; i++) {
        if (!used[i]) {
            used[i] = true;
            choose(cnt + 1, now + card[i]);
            used[i] = false;
        }
    }
}

int main() {
    cin >> n;
    cin >> k;

    for (int i = 0; i < n; i++) {
        cin >> card[i];
    }

    choose(0, "");

    cout << s.size();
}
