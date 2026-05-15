#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int answer = 1;
    for (int i = 0; i < n; i ++) {
        answer *= (n - i);
    }
    cout << answer << "\n";

}

// 3x3 총 9개의 칸 위에 3개의 rook 존재
// 처음에 하나를 뒀을 때 ... 다음에 놓을 수 없는 자리들이 정해짐
// 3x3의 경우: 9 -> 4 -> 1
// 4x4의 경우: 16 -> 9 -> 4 -> 1
// nxn의 칸으로 두지 말고 그냥 "다음 행"으로 봤었으면 좋았을 듯 ...
