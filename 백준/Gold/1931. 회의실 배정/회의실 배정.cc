#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n, count = 0, x = 0;
    cin >> n;
    vector<pair<long long, long long>> v;
    while (n--) {
        long long x, y;
        cin >> x >> y;
        v.push_back(make_pair(y, x));
    }
    sort(v.begin(), v.end());
    for (long long i = 0; i < v.size(); i++) {
        if (v[i].second >= x) {
            x = v[i].first;
            count++;
        }
    }
    cout << count;
}