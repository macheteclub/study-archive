#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    string str;
    cin >> N >> str;

    int e = 0, w = 0, s = 0, n = 0;

    for (int i = 0; i < N; i++) {
        if (str[i] == 'E') e++;
        else if (str[i] == 'W') w++;
        else if (str[i] == 'S') s++;
        else if (str[i] == 'N') n++;
    }

    int answer = min(min(w * 2 + s + n, e * 2 + s + n), min(n * 2 + e + w, s * 2 + e + w));

    cout << answer << "\n";
}
