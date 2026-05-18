#include <iostream>
#include <string>

using namespace std;

int n;
string str[4];
string word;
bool used[4];

bool check(int index) {
   if (index == word.size()) {
       return true;
   }

   for (int i = 0; i < 4; i++) {
       if (used[i]) continue;

       // 찾는 문자가 있으면(npos가 아니면) 반환
       if (str[i].find(word[index]) != string::npos) {
           used[i] = true;

           if (check(index + 1)) return true;

           used[i] = false;
       }
   }
   return false;
}

int main() {
    cin >> n;

    for (int i = 0; i < 4; i++) {
        cin >> str[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> word;

        for (int j = 0; j < 4; j++) {
            used[j] = false;
        }

        if (check(0)) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }

    }
}
