#include <iostream>

using namespace std;

int main() {
    int startOut, startIn;
    cin >> startOut >> startIn;

    int people = startIn - startOut;
    int best = people;
    for (int i = 0; i < 3; i++) {
        int out, in;
        cin >> out >> in;

        people -= out;
        people += in;

        if (people >= best) {
            best = people;
        }
    }
    cout << best;

}