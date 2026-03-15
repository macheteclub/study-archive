#include <iostream>
#include <string>

using namespace std;

int main() {

    string nowTime, startTime;
    cin >> nowTime >> startTime;

    int nh = stoi(nowTime.substr(0, 2));
    int nm = stoi(nowTime.substr(3, 2));
    int ns = stoi(nowTime.substr(6, 2));

    int sh = stoi(startTime.substr(0, 2));
    int sm = stoi(startTime.substr(3, 2));
    int ss = stoi(startTime.substr(6, 2));

    auto toSec = [](int h, int m, int s) {
        return h * 3600 + m * 60 + s;
    };

    int startSec = toSec(sh, sm, ss);
    int nowSec   = toSec(nh, nm, ns);

    int diff;
    if (startSec == nowSec) {
        diff = 0;
    } else {
        diff = startSec - nowSec;
        if (diff < 0) diff += 24 * 3600;
    }

    int h = diff / 3600;
    diff %= 3600;
    int m = diff / 60;
    int s = diff % 60;

    //cout << h << ':' << m << ':' << s;
    printf("%02d:%02d:%02d\n", h, m, s);
    return 0;
}

