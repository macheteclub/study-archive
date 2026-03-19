#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, num;
    vector<int> v;

    cin >> n;

    while(n--) {
        cin >> num;
        v.push_back(num);
    }
    
    // 이진 탐색 전제 조건 
    sort(v.begin(), v.end());
    
    cin >> m;
    while(m--) {
        cin >> num;
        // 무엇을 출력해야할까?
        cout << binary_search(v.begin(), v.end(), num) << "\n";
    }

    return 0;
}