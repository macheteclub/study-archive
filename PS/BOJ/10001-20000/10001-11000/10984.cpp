#include <iostream>

using namespace std;

// float 대신 double 사용을 자주 ... 
int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        int c, sumC = 0;
        double g, sumG = 0;
        for (int j = 0; j < n; j++) {
            cin >> c >> g;

            sumC += c;
            sumG += c * g;
        }
        double avg = sumG / sumC;
        //cout << sumC << " " << avg << "\n";
        printf("%d %.1f\n", sumC, avg);

    }

}