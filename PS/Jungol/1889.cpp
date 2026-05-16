#include <iostream>
#include <cmath>

using namespace std;

int board[15];
int n;
int cnt = 0;

// 3x3(일차원으로 구현), 3개의 퀸
void queen(int row) { // 0부터 시작... 1차원 배열
    if(row == n) {
        ++cnt;
        return;
    }

    for(int i = 0; i < n; ++i) {
        bool check = true;
        board[row] = i;

        for(int j = 0; j < row; ++j) {
            if(board[j] == board[row]) {
                check = false; // 이전에 퀸을 둔 자리와 행이 같으면

                break;
            }

            if(abs(row - j) == abs(board[j] - board[row])) {
                check = false;

                break;
            }
        }

        if(check) queen(row + 1); // check = true
    }
}

int main() {
    cin >> n;
    queen(0);

    cout << cnt;
}
