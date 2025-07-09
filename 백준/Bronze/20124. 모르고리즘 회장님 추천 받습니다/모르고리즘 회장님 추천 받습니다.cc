#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
bool aa(pair<string, long> p1, pair<string, long> p2) {
    if (p1.second != p2.second) return p1.second < p2.second;
    return p1.first > p2.first;
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n, b;
    cin >> n;
    vector<pair<string, long>> v;
    for (long i = 0; i < n; i++) {
        string a;
        cin >> a >> b;
        v.push_back({a, b});
    }
    sort(v.begin(), v.end(), aa);
    cout << v[n - 1].first;
}