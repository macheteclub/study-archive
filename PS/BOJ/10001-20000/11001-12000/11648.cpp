#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;

    int cnt = 0;
    while (str.size() > 1) {
        int tmp = 1;
        for (int i = 0; i < str.size(); i++) {
            tmp *= (str[i] - '0');
            // string - '0' 은 0 ~ 9일 때만 int 변환 가능
            // 문제에서: 입력은 첫 번째 줄에 선행하는 0이 없는 9자리 이하의 수
        }
        str = to_string(tmp);
        cnt++;
    }
    cout << cnt;
}