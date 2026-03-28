#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std; 

int main() {
    string str;
    stack<int> s1; // ()
    stack<int> s2; // []
    stack<char> s3; // ([)]
    bool check; // 하 ... 

    while (getline(cin, str)) {
        if (str == ".") break;

        while (!s1.empty()) s1.pop();
        while (!s2.empty()) s2.pop();
        while (!s3.empty()) s3.pop();
        check = true;

        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '(') {
                s1.push(1);
                s3.push('(');
            }
            if (str[i] == ')') {
                if (s3.empty() || s3.top() != '(') {
                    check = false;
                    break;
                }
                s3.pop();
                s1.pop();
            }
            if (str[i] == '[') {
                s2.push(1);
                s3.push('[');
            }
            if (str[i] == ']') {
                if (s3.empty() || s3.top() != '[') {
                    check = false;
                    break;
                }
                s3.pop();
                s2.pop();
            }

        }

        if (check == true && s1.empty() && s2.empty() && s3.empty()) {
            cout << "yes" << "\n";
        } else {
            cout << "no" << "\n";
        }
    }


}