#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin >> s;
    vector<pair<int, char>> v;
    for (int i = 0; i < 26; i++) {
        v.push_back(make_pair(0, 'A' + i));
    }
    for (int i = 0; i < s.length(); i++) {
        char c = toupper(s[i]);
        for (int j = 0; j < 26; j++) {
            if (c == v[j].second) {
                v[j].first++;
                break;
            }
        }
    }
    sort(v.rbegin(), v.rend());
    if (v[0].first == v[1].first) cout << "?";
    else cout << v[0].second;
}