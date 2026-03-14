#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    string name;
    int d, m, y;

    cin >> name >> d >> m >> y;
    string yName = name, oName = name;
    int yYoung = y, mYoung = m, dYoung = d;
    int yOld = y, mOld = m, dOld = d;

    int cnt = t - 1;
    while (cnt--) {
        cin >> name >> d >> m >> y;

        if (y > yYoung ||
            (y == yYoung && m > mYoung)||
            (y == yYoung && m == mYoung && d > dYoung)) {
            yName = name;
            yYoung = y;
            mYoung = m;
            dYoung = d;
        }

        if (y < yOld ||
            (y == yOld && m < mOld) ||
            (y == yOld && m == mOld && d < dOld)) {
            oName = name;
            yOld = y;
            mOld = m;
            dOld = d;
        }
    }
    cout << yName << "\n" << oName;
    return 0;
}