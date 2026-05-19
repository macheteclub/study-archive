#include <iostream>
#include <deque>

using namespace std;

// 1 2 3 ... 98 99 100
int main() {
    deque<int> dq;
    for (int i = 0; i < 3; i++) {
        int kang;
        cin >> kang;
        dq.push_back(kang);
    }

    // 2 3 5
    int cnt = 0;
    while (dq[2] - dq[1] > 1 || dq[1] - dq[0] > 1) {
        int l = dq[1] - dq[0];
        int r = dq[2] - dq[1];
        if (r > l) {
            dq.pop_front();
            dq.insert(dq.begin()+1, dq[0]+1);
        } else {
            dq.pop_back();
            dq.insert(dq.end()-1, dq[1]-1);
        }
        cnt++;
    }
    cout << cnt;

}
