#include <iostream>
#include <string>

using namespace std;

// 스페이드, 다이아몬드, 하트, 클로버 ->  P, K, H, T
// 1 ~ 13개 총 52개 존재. 하트11번 -> H11
int main() {
    string str;
    cin >> str;

    bool cards[4][14] = {}; // P,K,H,T 와 1 ~ 13가지
    int p = 0, k = 0, h = 0, t = 0;

    for (int i = 0; i < str.size(); i += 3) {
        string card = str.substr(i, 3);

        // T 결정
        int shape;
        if (card[0] == 'P') shape = 0;
        else if (card[0] == 'K') shape = 1;
        else if (card[0] == 'H') shape = 2;
        else shape = 3;

        // XY 결정
        int num = stoi(card.substr(1, 2));

        // 에러 처리 .. 루프 안에 있어서 아래
        // cards[shape][num] = true;를 받음
        if (cards[shape][num]) {
            cout << "ERROR" << "\n";
            return 0;
        }
        cards[shape][num] = true;

        if (card[0] == 'P') p++;
        else if (card[0] == 'K') k++;
        else if (card[0] == 'H') h++;
        else if (card[0] == 'T') t++;
    }
    cout << 13 - p << " "
         << 13 - k << " "
         << 13 - h << " "
         << 13 - t;

}
