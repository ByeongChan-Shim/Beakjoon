#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
bool aa(pair<int, string> p1, pair<int, string> p2) {
    if (p1.first != p2.first) return p1.first > p2.first;
    return p1.second < p2.second;
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    cin.ignore();
    string s, name;
    getline(cin, s);
    stringstream ss(s);
    vector<pair<int, string>> v;
    while (ss >> name) v.push_back(make_pair(0, name));
    for (int i = 0; i < n; i++) {
        string x, y;
        getline(cin, x);
        stringstream sss(x);
        while (sss >> y) {
            for (int i = 0; i < n; i++) {
                if (y == v[i].second) v[i].first++;
            }
        }
    }
    sort(v.begin(), v.end(), aa);
    for (int i = 0; i < n; i++) {
        cout << v[i].second << " " << v[i].first << "\n";
    }
}