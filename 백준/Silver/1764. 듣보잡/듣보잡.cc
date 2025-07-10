#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n, m;
    cin >> n >> m;
    set<string> ss;
    vector<string> v;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        ss.insert(s);
    }
    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;
        if (ss.find(s) != ss.end()) v.push_back(s);
    }
    sort(v.begin(), v.end());
    cout << v.size() << "\n";
    for (int i = 0; i < v.size(); i++) cout << v[i] << "\n";
}