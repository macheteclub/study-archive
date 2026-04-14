#include <iostream>
#include <string>

using namespace std;

int main() {
    string mbti;
    cin >> mbti;

    string m = mbti.substr(0,1);   
    string b = mbti.substr(1,1);    
    string t = mbti.substr(2,1);    
    string i = mbti.substr(3,1);   
    
    //cout << m << b << t << i << "\n";
    
    if(m == "E" ? cout << "I": cout << "E");
    if(b == "S" ? cout << "N": cout << "S");
    if(t == "T" ? cout << "F": cout << "T");
    if(i == "J" ? cout << "P": cout << "J"); 
}