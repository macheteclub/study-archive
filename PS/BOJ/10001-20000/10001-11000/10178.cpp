#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int c, v, g = 0, d = 0;
        cin >> c >> v;
        
        g = c / v;
        d = c % v;

        printf("You get %d piece(s) and your dad gets %d piece(s).\n", g, d);
    }

}