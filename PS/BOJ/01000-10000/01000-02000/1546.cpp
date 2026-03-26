#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    //double score = 0;
    double tmp = 0;
    vector<double> v(n);
    vector<double> v2(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        //cout << v[i];
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        v2[i] = (v[i] / v.back()) * 100;
        tmp += v2[i];
    }
    cout << tmp / n;
}