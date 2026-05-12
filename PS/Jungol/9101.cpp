#include <iostream>

using namespace std;

void printName(int n) {
    if (n == 0) return;
    cout << "홍길동" << "\n";

    printName(n-1);
}

int main() {
    printName(10);
}
