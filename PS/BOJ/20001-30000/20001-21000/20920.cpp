#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

map<string, int> mp;
vector<string> v;

bool cmp(string a, string b) {
	if (mp[a] != mp[b]) return mp[a] > mp[b];
	if (a.length() != b.length()) return a.length() > b.length();
	return a < b;
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        string str;
        cin >> str;

        if (str.size() < m) continue;
        if (mp.find(str) != mp.end()) mp[str]++;
        else { 
            mp[str] = 1;
            v.push_back(str);
        }
    }

    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "\n";
    }
    

}