#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool aa(pair<long, long> p1, pair<long, long> p2) {
    if (p1.first != p2.first) return p1.first < p2.first;
    else return  p1.second < p2.second;
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    vector<pair<long, long>> v(n);
    for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
    sort(v.begin(), v.end(), aa);
    for (long i = 0; i < n; i++) cout << v[i].first << " " << v[i].second << "\n";
}