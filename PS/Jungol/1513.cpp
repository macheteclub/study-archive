#include <iostream>
#include <string>

using namespace std;

int n;
int cnt = 0;
string path;

void dfs(int w, int l) {
    if (w == n) {
        cout << path << "\n";
        cnt++;
        return;
    }
    if (l == n) {
        return;
    }

    path.push_back('o');
    dfs(w+1, l);
    path.pop_back();

    path.push_back('x');
    dfs(w, l+1);
    path.pop_back();
}

int main() {
    cin >> n;
    dfs(0, 0);

    cout << "total " << cnt << " cases" << "\n";

}
