#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n, m, x;
    cin >> n >> m;
    vector<long> v, vv;
    for (long i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (long i = 0; i < n - 2; i++) {
        for (long j = i + 1; j < n - 1; j++) {
            for (long k = j + 1; k < n; k++) {
                if (v[i] + v[j] + v[k] > m) break;
                else vv.push_back(v[i] + v[j] + v[k]);
            }
        }
    }
    sort(vv.rbegin(), vv.rend());
    cout << vv[0];
}