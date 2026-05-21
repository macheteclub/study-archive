#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 0;
    int stop = false;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        if (!stop && a == 1) {
            cnt++;
        } else {
            stop = true;
        }
    }

    // 박스에 2개 이상 귤이 들어있으면 2~ 를 만지는 사람의 승리 ...
    if (cnt == n) {
        cout << (cnt % 2 == 1 ? "J" : "H"); // 홀수
    } else {
        cout << (cnt % 2 == 0 ? "J" : "H"); // 짝수
    }

}
