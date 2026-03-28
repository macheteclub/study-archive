#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    vector<string> str(5);
    
    for (int i = 0; i < 5; i++) {
        cin >> str[i];
    }

    int max = 0;
    for (int i = 0; i < 5; i++) {
        if ((int)str[i].size() > max) {
            max = (int)str[i].size();
        }
    }
    
    for (int i = 0; i < max; i++) {
        for (int j = 0; j < 5; j++) {
            if (i < (int)str[j].size()) {
                cout << str[j][i];
            }
        }
    }
}