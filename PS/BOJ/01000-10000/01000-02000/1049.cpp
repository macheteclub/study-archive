#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m; // 끊어진 줄의 갯수, 브랜드의 갯수
    cin >> n >> m;

    int p, s;
    cin >> p >> s;

    int minP = p;
    int minS = s;
    for (int i = 1; i < m; i++) {
        cin >> p >> s;

        minP = min(minP, p); // 20
        minS = min(minS, s); // 4
    }
    int one = n*minS; // 
    int two = (n/6)*minP + (n%6)*minS;
    int three = (n/6 + 1)*minP;

    //cout << min(one, min(two, three));

}