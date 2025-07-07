#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int a;
    cin >> a;
    vector<string> v;
    for (int i = 0; i < a; i++) {
        string s;
        cin >> s;
        v.push_back(s);
    }
    stable_sort(v.begin(), v.end(), [](const string &a, const string &b) {
        if (a.size() != b.size()) return a.size() < b.size();
        return a < b;
    });
    v.erase(unique(v.begin(), v.end()), v.end());
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
}