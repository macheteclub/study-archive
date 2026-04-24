#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    int t = 0;
    char a = 'A'; // 알파벳 시작 ...
    for (int i = 0; i < s.length(); i++) {
        int diff = s[i] - a;
        if (diff < 0) { // 음수 처리 
            diff = -diff;
        }

        int right = diff;
        int left = 26 - diff;
        t += (right < left ? right : left);
        // 반시계 방향이 더 크면(오래걸리면) ? 오른쪽 : 왼쪽
        a = s[i]; 
    }
    cout << t;
}
