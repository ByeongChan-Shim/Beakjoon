#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long n;
    cin >> n;
    vector<long> v(n);
    for (long i = 0; i < n; i++) cin >> v[i];
    vector<long> vv(v);
    sort(vv.begin(), vv.end());
    vv.erase(unique(vv.begin(), vv.end()), vv.end());
    for (long i = 0; i < n; i++) cout << lower_bound(vv.begin(), vv.end(), v[i]) - vv.begin() << " ";
}