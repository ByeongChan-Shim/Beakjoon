#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n;
    cin >> n;
    vector<pair<long, long>> v;
    while (n--) {
        long x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end(), [](auto &a, auto &b) {
        if (a.second != b.second) return a.second < b.second;
        else return a.first < b.first;
    });
    for (auto p : v) cout << p.first << " " << p.second << "\n";
}