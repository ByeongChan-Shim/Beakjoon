#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    long a, b;
    cin >> a >> b;
    vector<long long> va(a), vb(b);
    for (long i = 0; i < a; i++) cin >> va[i];
    for (long i = 0; i < b; i++) cin >> vb[i];
    sort(va.begin(), va.end());
    sort(vb.begin(), vb.end());
    vector<long long> v(a + b);
    auto iter = set_symmetric_difference(va.begin(), va.end(), vb.begin(), vb.end(), v.begin());
    v.erase(iter, v.end());
    cout << v.size();
}