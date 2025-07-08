#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n, m, sum = 0;
    cin >> n >> m;
    vector<pair<long, long>> vv;
    vector<long> vvv;
    vvv.push_back(0);
    long v, p, s;
    cin >> v >> p >> s;
    sum = v + p + s;
    for (long i = 0; i < n; i++) {
        cin >> v >> p >> s;
        if (sum >= v + p + s) vv.push_back(make_pair(i + 1, v + p + s));
    }
    sort(vv.begin(), vv.end(), greater<pair<long, long> >());
    if (m - 1 < vv.size()) for (long i = 0; i < m - 1; i++) vvv.push_back(vv[i].first);
    else for (long i = 0; i < vv.size(); i++) vvv.push_back(vv[i].first);
    sort(vvv.begin(), vvv.end());
    for (long i = 0; i < vvv.size(); i++) cout << vvv[i] << " ";
}