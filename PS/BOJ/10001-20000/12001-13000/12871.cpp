#include <iostream>
#include <string>
//#include <numeric>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    string a, b;
    cin >> a >> b;

    string aa, bb = "";

    int la = (int)a.size();
    int lb = (int)b.size();
    int g = gcd(la, lb);
    int l = la / g * lb; // lcm

    // a, b를 l 길이보다 클때까지 붙이기
    while ((int)aa.size() < l) aa.append(a);
    while ((int)bb.size() < l) bb.append(b);

    string aaa = aa.substr(0, l);
    string bbb = bb.substr(0, l);

    //cout << aaa << "\n" << bbb;

    if (aaa == bbb) {
        cout << 1;
        return 0;
    }
    cout << 0;
    return 0;

}